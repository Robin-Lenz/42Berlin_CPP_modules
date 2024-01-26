#include "addr.class.hpp"

PhoneBook::PhoneBook(int nb) : num(nb){
	return ;
}

PhoneBook::~PhoneBook(void){
	return ;
}

void	print_contact(int j, PhoneBook Book)
{
		std::cout << Book.cons[j].index;
		std::cout << " | ";
		if (Book.cons[j].name.length() <= 10)
			std::cout << std::setw(10) << std::right << Book.cons[j].name;
		std::cout << " | ";
		if (Book.cons[j].lastname.length() <= 10)
			std::cout << std::setw(10) << std::right << Book.cons[j].lastname;
		std::cout << " | ";
		std::cout << Book.cons[j].phone << std::endl;
}

int	main(void)
{
	std::string		buff;
	std::string		tmp;
	PhoneBook		Book;

	std::cout << "ADD [1], SEARCH [2], EXIT [3]" << std::endl;
	std::cout << "enter command" << std::endl;
	while (std::getline(std::cin, buff))
	{
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
			std::cout << "enter a name" << std::endl;
			std::cin >> Book.cons[0].name;
			if (Book.cons[0].name.length() > 10)
			{
				Book.cons[0].name = Book.cons[0].name.substr(0, 10);
				Book.cons[0].name[9] = '.';
			}
			std::cout << "enter a lastname" << std::endl;
			std::cin >> Book.cons[0].lastname;
			if (Book.cons[0].lastname.length() > 10)
			{
				Book.cons[0].lastname = Book.cons[0].lastname.substr(0, 10);
				Book.cons[0].lastname[9] = '.';
			}
			std::cout << "enter a phonenumber" << std::endl;
			std::cin >> Book.cons[0].phone;
			Book.cons[0].index = 1;
			Book.num++;
			std::getline(std::cin, buff);
		}
		if (Book.num > 0 && (buff.compare(0, 6, "SEARCH", 0, 6) == 0 || buff[0] == '2'))
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
		buff.clear();
		std::cout << "enter command" << std::endl;
	}
}