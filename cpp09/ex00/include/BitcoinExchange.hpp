#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <string>
#include <vector>
#include <map>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"

# define BOLD		"\x1b[1m"
# define ITALIC		"\x1b[3m"

#define DATABASE "files/data.csv"

#define DEBUG_MESSAGE 0

class Date
{
	private:
		int year;
		int month;
		int day;

	public:
		Date(const std::string& dateString);
		~Date();
		Date(const Date& other);
		Date& operator=(const Date& other);

		bool operator<(const Date& other) const;
		bool operator==(const Date& other) const;
};

class BitcoinExchange
{
	private:
		std::map<Date, float> exchangeRates;
		void loadExchangeRates(const std::string& databaseFile);

	public:
		BitcoinExchange(const std::string& databaseFile);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);

		float getExchangeRate(const Date& date) const;
};

#endif
