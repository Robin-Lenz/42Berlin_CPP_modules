#include <iostream>
#include <string>
#include "addr.class.hpp"
#include <cstring>
# include <iomanip>

PhoneBook::PhoneBook(int nb) : num(nb){
	std::cout << "hi" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "ciao" << std::endl;
	return ;
}

int	main(void)
{
	char	buff[512];
	PhoneBook	Book;
	

	std::cout << "ADD [1], SEARCH [2], EXIT [3]" << std::endl;
	while (1)
	{
		std::cout << "enter command" << std::endl;
		std::cin >> buff;
		if (std::strcmp(buff, "ADD") == 0 || std::strcmp(buff, "1") == 0)
		{
			if (Book.num > 8)
				Book.num = 8;
			std::cout << "Enter a new contact: name, last name, phonenumber\n";
			for (int i = Book.num; i > 0 && i < 8; i--)
				Book.cons[i] = Book.cons[i - 1];
			std::cin >> Book.cons[0].name;
			std::cin >> Book.cons[0].lastname;
			std::cin >> Book.cons[0].phone;
			Book.num++;
		}
		std::cout << Book.num << std::endl;
		if (Book.num > 0 && (std::strcmp(buff, "SEARCH") == 0 || std::strcmp(buff, "2") == 0))
		{
			if (Book.num > 8)
				Book.num = 8;
			for (int j = Book.num - 1; j >= 0 && j < 8; j--)
			{
				std::cout << " | ";
				std::cout << Book.cons[j].name;
				std::cout << " | ";
				std::cout << Book.cons[j].lastname;
				std::cout << " | ";
				std::cout << Book.cons[j].phone << std::endl;
			}
		}
		if (std::strcmp(buff, "EXIT") == 0 || std::strcmp(buff, "3") == 0)
			break;
	}
}