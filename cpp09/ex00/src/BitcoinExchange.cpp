#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>

Date::Date(const std::string& dateString)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Date default constructor called" RESET << std::endl;
    std::istringstream iss(dateString);
    char delimiter;

	iss >> year >> delimiter >> month >> delimiter >> day;
}

Date::~Date()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Date default destructor called" RESET << std::endl;
}

Date::Date(const Date& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Date copy constructor called" RESET << std::endl;
    year = toCopy.year;
    month = toCopy.month;
    day = toCopy.day;
}

Date& Date::operator=(const Date& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Date copy assignment operator called" RESET << std::endl;
    if (this != &toAssign)
    {
        year = toAssign.year;
        month = toAssign.month;
        day = toAssign.day;
    }
    return *this;
}

bool Date::operator<(const Date& other) const 
{
    if (year < other.year)
        return true;
    else if (year > other.year)
        return false;
    else {
        if (month < other.month)
            return true;
        else if (month > other.month)
            return false;
        else
            return day < other.day;
    }
}

bool Date::operator==(const Date& toCompare) const 
{
	if (toCompare.year == year && toCompare.month == month && toCompare.day == day)
		return true;
	return false;
}

BitcoinExchange::BitcoinExchange(const std::string& databaseFile)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "BitcoinExchange default constructor called" RESET << std::endl;
    loadExchangeRates(databaseFile);
}

BitcoinExchange::~BitcoinExchange()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "BitcoinExchange default destructor called" RESET << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "BitcoinExchange copy constructor called" RESET << std::endl;
    exchangeRates = toCopy.exchangeRates;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "BitcoinExchange copy assignment operator called" RESET << std::endl;
    if (this != &toAssign)
    {
        exchangeRates = toAssign.exchangeRates;
    }
    return *this;
}

float BitcoinExchange::getExchangeRate(const Date& date) const
{
    std::map<Date, float>::const_iterator it = exchangeRates.lower_bound(date);

    if (it != exchangeRates.end() && it->first == date)
        return it->second;
    else if (it != exchangeRates.begin())
	{
        --it;
        return it->second;
    }
	else if (exchangeRates.empty())
        return -1.0f;

    return exchangeRates.rbegin()->second;
}

void BitcoinExchange::loadExchangeRates(const std::string& databaseFile)
{
    std::ifstream file(databaseFile.c_str());
    if (!file)
        throw std::runtime_error("Could not open database file");

    std::string line;
    while (std::getline(file, line)) 
	{
        std::istringstream iss(line);
        std::string dateStr, rateStr;
        if (std::getline(iss, dateStr, ',') && std::getline(iss, rateStr))
		{
            try
			{
                Date date(dateStr);

                float rate = std::atof(rateStr.c_str());

                exchangeRates[date] = rate;
            } 
			catch (const std::exception& e)
			{
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }
    }
}
