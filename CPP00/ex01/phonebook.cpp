#include <iostream>
#include <sstream>
//#include <string>
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

void	print_contact(int j, PhoneBook Book)
{
		std::cout << Book.cons[j].index;
		std::cout << " | ";
		std::cout << Book.cons[j].name;
		std::cout << " | ";
		std::cout << Book.cons[j].lastname;
		std::cout << " | ";
		std::cout << Book.cons[j].phone << std::endl;
}

int	main(void)
{
	std::string		buff;
	std::string		tmp;
	PhoneBook		Book;

	std::cout << "ADD [1], SEARCH [2], EXIT [3]" << std::endl;
	while (1)
	{
		std::cout << "enter command" << std::endl;
		std::getline(std::cin, buff);
		if (buff == "ADD" || buff == "1")
		{
			if (Book.num > 8)
				Book.num = 8;
			std::cout << "Enter a new contact: name, last name, phonenumber\n";
			for (int i = Book.num; i > 0 && i < 8; i--)
			{
				Book.cons[i] = Book.cons[i - 1];
				Book.cons[i].index++;
			}
			std::cin >> Book.cons[0].name;
			Book.cons[0].name = Book.cons[0].name.substr(0, 10);
			std::cin >> Book.cons[0].lastname;
			std::cin >> Book.cons[0].phone;
			Book.cons[0].index = 1;
			Book.num++;
		}
		std::cout << Book.num << std::endl;
		if (Book.num > 0 && (buff == "SEARCH" || buff[0] == '2'))
		{
			if (Book.num > 8)
				Book.num = 8;
			size_t pos = buff.find(' ');
			tmp = buff.substr(pos + 1);
			if (tmp.length() == 1 && buff.length() != 1)
			{
				std::string	nums = "12345678";
				pos = nums.find(tmp[0]);
				if (pos < 9 && tmp[0] == nums[pos])
				{
					for (int k = 0; k < Book.num; k++)
					{
						std::stringstream ss;
						ss << Book.cons[k].index;
						std::string strNumber = ss.str();
						if (strNumber == tmp)
							print_contact(k, Book);
					}
				}
			}
			else
				for (int j = Book.num - 1; j >= 0 && j < 8; j--)
					print_contact(j, Book);
		}
		if (buff == "EXIT" || buff == "3")
			break;
	}
}