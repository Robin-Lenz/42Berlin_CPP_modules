#include "BitcoinExchange.hpp"

const char* BitcoinExchange::Error::what() const throw(){
	return _msg.c_str();
}

BitcoinExchange::Error::Error(const std::string &msg){
	_msg = msg;
}

BitcoinExchange::Error::~Error() throw(){

}

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
		// std::cout << "Date " << "|" << date << "|" << " inited to: " << floatvalue << _data[date] << std::endl;
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

void BitcoinExchange::calcExchange(std::string inputdate, float inputvalue){
	float result = inputvalue * _data[inputdate];
	std::cout << inputdate << " => " << inputvalue << " = " << result << "           | " << _data[inputdate] << " |" << '\n';;
	// std::cout << inputvalue << '\n';
	// std::cout << "from map:" << _data[inputdate] << '\n';
	// how to access data in a map actually
}