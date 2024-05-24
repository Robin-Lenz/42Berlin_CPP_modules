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
			try
			{
				validateinputline(inputdate);
				calcExchange(inputdate, inputvalue, b);
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

int validateinputline(std::string inputdate){// what about max int , negative numbers -> split up into two functions
	std::string year, month, day;
	int y, m, d;
	std::stringstream stream;
	stream << inputdate;
	std::getline(stream, year, '-');
	std::stringstream sy;
	sy << year;
	if (!(sy >> y && year.length() == 4)){// innerhalb der spanne die von der DB abgedeckt ist
		//throw error
	}
	std::getline(stream, month, '-');
	std::stringstream sm;
	sm << month;
	if (!(sm >> m && month.length() == 2)){// innerhalb der spanne die von der DB abgedeckt ist
		// throw here
		// std::cout << month;
	}
	std::getline(stream, day);
	std::stringstream sd;
	sd << day;
	if (!(sd >> d && day.length() == 2)){// innerhalb der spanne die von der DB abgedeckt ist
		// throw here
		// std::cout << day;
	}

	return (0);
}

void calcExchange(std::string inputdate, float inputvalue, BitcoinExchange b){
	(void)inputdate;
	(void)inputvalue;
	(void)b;
	
	// how to access data in a map actually
}