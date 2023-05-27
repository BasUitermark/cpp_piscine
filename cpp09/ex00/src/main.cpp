#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "BitcoinExchange.hpp"

std::string trim(const std::string& str)
{
    size_t first = str.find_first_not_of(" \t\r\n");
    size_t last = str.find_last_not_of(" \t\r\n");
    if (first == std::string::npos || last == std::string::npos)
        return "";
    return str.substr(first, last - first + 1);
}

bool isValidDate(const std::string& date)
{
    std::istringstream ss(date);
    int year, month, day;
    char dash1, dash2;
    ss >> year >> dash1 >> month >> dash2 >> day;
    
    if (ss.fail() || dash1 != '-' || dash2 != '-')
        return false;

    if (month < 1 || month > 12 || day < 1 || day > 31)
        return false;

    return true;
}

bool errorCheck(const float& value)
{
	if (!value)
		return false;
	if (value < 0)
	{
		std::cerr << RED BOLD "Error: " RESET << "not a positive number." << std::endl;
		return false;
	}
	else if (value > 1000)
	{
		std::cerr << RED BOLD "Error: " RESET << "too large a number." << std::endl;
		return false;
	}
	return true;
}

void processLine(const std::string& line, BitcoinExchange& exchange) 
{
    std::istringstream iss(line);
    std::string dateStr, valueStr;

    if (getline(iss, dateStr, '|') && getline(iss, valueStr))
	{
        dateStr = trim(dateStr);
        valueStr = trim(valueStr);
        if (dateStr == "date" && valueStr == "value")
            return;

        try
		{
            float value = 0.0f;
            std::istringstream valueIss(valueStr);
            valueIss >> value;
			if (errorCheck(value) == false || valueIss.fail() || !valueIss.eof())
				return;
            Date date(dateStr);

            float exchangeRate = exchange.getExchangeRate(date);
            if (exchangeRate == -1.0f)
			{
                std::cerr << RED BOLD "Error: " RESET << "no exchange rate found for date " << dateStr << std::endl;
                return;
            }

            float result = value * exchangeRate;
            std::cout << BOLD BLUE << dateStr << " => " RESET << value << BOLD BLUE " = " RESET << result << std::endl;
        }
		catch (const std::exception& e) 
		{
            std::cerr << RED BOLD "Exception: " RESET << e.what() << std::endl;
        }
    }
	else
		std::cout << RED BOLD "Error: " RESET << "bad input => " << dateStr << std::endl;
}

int main(int argc, char* argv[])
{
    if (argc < 2)
	{
        std::cerr << RED BOLD "Error: " RESET << "no input file provided." << std::endl;
        return 1;
    }

    std::ifstream inputFile(argv[1]);
    if (!inputFile)
	{
        std::cerr << RED BOLD "Error: " RESET << "could not open file." << std::endl;
        return 1;
    }

	BitcoinExchange exchange(DATABASE);
    std::string line;
    while (std::getline(inputFile, line))
        processLine(line, exchange);

    inputFile.close();
    return 0;
}
