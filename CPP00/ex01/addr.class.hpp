#ifndef PhoneBook_H
# define PhoneBook_H

#include <iostream>
#include <sstream>
#include <cstring>
#include <iomanip>

class Contacts {
	
	public:

		int			index;
		std::string	name;
		std::string	lastname;
		std::string	phone;
};

class PhoneBook {

	public:

		int	num;
		Contacts	cons[8];

		PhoneBook(int = 0);
		~PhoneBook(void);
};


#endif