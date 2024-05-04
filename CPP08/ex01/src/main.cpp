#include "Span.hpp"

int main(){
	int len = 100000;
	Span sp = Span(len);
	try
	{
		srand(static_cast<unsigned int>(time(NULL)));
		for (int i = 0; i < len; i++)
		{
			int random = rand() % 100;
			sp.addNumber(random);
		}
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	
	return 0;
}