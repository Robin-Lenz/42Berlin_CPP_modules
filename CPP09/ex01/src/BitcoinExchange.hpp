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

		// void checkLine(const std::string &line);
};

int validateinputline(std::string inputdate);
// int validateinputdate(std::string inputdate);

#endif