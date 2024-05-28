#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	
	std::string inputline;
	std::string inputdate;
	float inputvalue;

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
	while (std::getline(input, inputline))
	{
		std::stringstream inputlinestream(inputline);
		if (std::getline(inputlinestream, inputdate, '|') && inputlinestream >> inputvalue){
			inputdate = trim(inputdate);
			try
			{
				validateinputline(inputdate, inputvalue);
				b.calcExchange(inputdate, inputvalue);
				// make actual calculation here
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		else{
			std::cerr << "bad input\n";
		}
	}
	return (0);
}

int validateinputline(std::string inputdate, float inputvalue){// what about max int , negative numbers -> split up into two functions
	std::string year, month, day;
	int y, m, d;
	std::stringstream stream;
	stream << inputdate;
	std::getline(stream, year, '-');
	std::stringstream sy;
	sy << year;
	if (!(sy >> y && year.length() == 4)){// innerhalb der spanne die von der DB abgedeckt ist
		throw BitcoinExchange::Error("Error: date format -> year");
	}
	std::getline(stream, month, '-');
	std::stringstream sm;
	sm << month;
	if (!(sm >> m && month.length() == 2)){// innerhalb der spanne die von der DB abgedeckt ist
		throw BitcoinExchange::Error("Error: date format -> month");
	}
	std::getline(stream, day);
	std::stringstream sd;
	sd << day;
	if (!(sd >> d && day.length() == 2)){// innerhalb der spanne die von der DB abgedeckt ist
		throw BitcoinExchange::Error("Error: date format -> day");
	}

	/*validate inputvalue*/

	(void)inputvalue;

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
		++start;
	}

	// If the string is all whitespace, return an empty string
	if (start == str.size()) {
		return "";
	}

	// Find the last non-whitespace character
	size_t end = str.size() - 1;
	while (end > start && isWhitespace(str[end])) {
		--end;
	}

	// Create the substring from start to end
	return str.substr(start, end - start + 1);
}