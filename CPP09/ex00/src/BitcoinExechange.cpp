/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExechange.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-29 13:22:36 by robin             #+#    #+#             */
/*   Updated: 2024-05-29 13:22:36 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

BitcoinExchange::~BitcoinExchange(){
	
};

BitcoinExchange::BitcoinExchange(const BitcoinExchange &a){
	this->_data = a._data;
};

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &a){
	if (this != &a)
		this->_data = a._data;
	return (*this);
};

BitcoinExchange::BitcoinExchange(const std::string &data){
	std::string line;
	std::string date;
	std::string value;
	double doublevalue;

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
		iss >> doublevalue ;
		_data[date] = doublevalue;
	}
};

void BitcoinExchange::calcExchange(std::string tmp_inputdate, std::string inputdate, double inputvalue){
	double result = inputvalue * _data[inputdate];
	std::cout << tmp_inputdate << " => " << inputvalue << " = " << result << '\n';;
}

void BitcoinExchange::val_date(std::string &inputdate){
	std::string year, month, day;
	int y, m, d;

	std::stringstream stream;
	stream << inputdate;
	std::getline(stream, year, '-');
	std::stringstream sy;
	sy << year;
	if (!(sy >> y && year.length() == 4)){
		throw BitcoinExchange::Error("Error: date format -> year");
	}

	std::getline(stream, month, '-');
	std::stringstream sm;
	sm << month;
	if (!(sm >> m && month.length() == 2)){
		throw BitcoinExchange::Error("Error: date format -> month");
	}

	std::getline(stream, day);
	std::stringstream sd;
	sd << day;
	if (!(sd >> d && day.length() == 2)){
		throw BitcoinExchange::Error("Error: date format -> day");
	}
}

void BitcoinExchange::val_value(std::string &inputdate, double inputvalue){

	/*validate inputvalue*/
	if (inputvalue < 0){
		throw BitcoinExchange::Error("Error: not a positive number");
	}

	// make sure date exists in csv if not use the value before
	std::map<std::string, double>::const_iterator it = _data.find(inputdate);
	if(it == _data.end())
	{
		it = _data.lower_bound(inputdate);
		if (!it->second)
			throw BitcoinExchange::Error("Error: value can't be calculated date lies outside the range covered by the database");
		--it;
		inputdate = it->first;
	}

	// this check is required by the subject, anyway the check below does a better job imo
	if (inputvalue > 1000){
		throw BitcoinExchange::Error("Error: too large number");
	}

	// // ensure the result can be stored in int without overflow
	// double d_err = (inputvalue) * _data[inputdate];
	// if (d_err < -std::numeric_limits<int>::max() || d_err > std::numeric_limits<int>::max()){
	// 	throw BitcoinExchange::Error("Error: too large number");
	// }
}

void BitcoinExchange::validateinputline(std::string &inputdate, double inputvalue){
	val_date(inputdate);
	val_value(inputdate, inputvalue);
}