/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-29 13:23:03 by robin             #+#    #+#             */
/*   Updated: 2024-05-29 13:23:03 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	
	std::string inputline;
	std::string inputdate;
	std::string tmp_inputdate;
	double inputvalue;

	if (ac != 2){
		std::cerr << "Usage: " << av[0] << " <inputfile>\n";
		return (1);
	}
	BitcoinExchange b("data.csv");
	std::ifstream input(av[1]);
	if (!input.is_open()){
		std::cerr << "Error can't open input file\n";
		return (1);
	}
	std::getline(input, inputline);
	while (std::getline(input, inputline))
	{
		std::stringstream inputlinestream(inputline);
		if (std::getline(inputlinestream, inputdate, '|') && inputlinestream >> inputvalue){
			inputdate = trim(inputdate);
			// need tmp as inputdate might be manipulated in validateinputline to be able to retrieve the lower bound value and still print the date of the inputfile
			tmp_inputdate = inputdate; 
			try
			{
				b.validateinputline(inputdate, inputvalue);
				b.calcExchange(tmp_inputdate, inputdate, inputvalue);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		else{
			std::cerr << "bad input " << inputline << '\n';
		}
	}
	return (0);
}



bool isWhitespace(char ch) {
	return std::isspace(static_cast<unsigned char>(ch));
}

std::string trim(const std::string& str) {
	if (str.empty()) {
		return str;
	}

	// Find the first non-whitespace character
	size_t start = 0;
	while (start < str.size() && isWhitespace(str[start])) {
		start++;
	}

	// If the string is all whitespace, return an empty string
	if (start == str.size()) {
		return "";
	}

	// Find the last non-whitespace character
	size_t end = str.size() - 1;
	while (end > start && isWhitespace(str[end])) {
		end--;
	}

	// Create the substring from start to end
	return str.substr(start, end - start + 1);
}