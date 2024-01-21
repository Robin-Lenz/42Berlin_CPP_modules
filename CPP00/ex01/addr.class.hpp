#ifndef PhoneBook_H
# define PhoneBook_H

class Contacts {
	
	public:

		std::string	index;
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