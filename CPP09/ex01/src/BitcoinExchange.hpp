#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
// # include <algorithm>
#include <map>

class BitcoinExchange {
	private:
		std::map<std::string, float> _data;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &a);
		BitcoinExchange(const std::string &data);
		~BitcoinExchange();

		BitcoinExchange &operator=(const BitcoinExchange &a);

	class Error : public std::exception
	{
		private:
			std::string _msg;

		public:
			Error(const std::string &msg);
			virtual const char* what() const throw();
			virtual ~Error() throw();
	};

	void calcExchange(std::string inputdate, float inputvalue);
};

int validateinputline(std::string inputdate, float inputvalue);
std::string trim(const std::string& str);
bool isWhitespace(char ch);

#endif