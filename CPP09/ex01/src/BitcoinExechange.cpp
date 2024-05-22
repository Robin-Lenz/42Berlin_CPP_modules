#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
	
};

// BitcoinExchange::BitcoinExchange(const BitcoinExchange &a){
	
// };

BitcoinExchange::BitcoinExchange(const std::string &data){
	std::string line;
	std::string date;
	std::string value;
	float floatvalue;

	std::ifstream file(data.c_str());
	if (!file.is_open()){
		std::cerr << "Error can't open file\n";
		return ;
	}

	while (std::getline(file, line))
	{
		std::stringstream linestream(line);
		std::getline(linestream, date, ',');
		std::getline(linestream, value);
		std::istringstream iss(value);
		iss >> floatvalue;
		_data[date] = floatvalue;
	}
};

BitcoinExchange::~BitcoinExchange(){
	
};

// BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &a){
	
// };



// void BitcoinExchange::checkLine(const std::string &line){
// 	size_t comma = line.find(",");
// 	std::cout << comma << '\n';
// 	// std::split(line, ',');
// }