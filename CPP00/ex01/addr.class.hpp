#ifndef PhoneBook_H
# define PhoneBook_H

#include <iostream>
#include <sstream>
#include <cstring>
#include <iomanip>

class Contacts {
	
	private:
		int			_index;
		std::string	_name;
		std::string	_lastname;
		std::string	_phone;
		std::string	_nickname;
		std::string	_secret;

	public:
		Contacts();
		~Contacts();
		void		increase_index();
		std::string get_name();
		std::string get_lastname();
		std::string	get_nickname();
		std::string	get_secret();
		std::string	get_phone();
		int			get_index();
		void		assign_index(int i);
		void		assign_data(std::string name,\
							std::string lastname,\
							std::string phone,\
							std::string nickname,\
							std::string secret);
};

class PhoneBook {

	private:
		int	_num;
		Contacts	cons[8];

	public:
		PhoneBook(int = 0);
		~PhoneBook(void);
		void	add_con();
		void	search(std::string tmp, std::string buff);
};

std::string	cut_string(std::string str);
void	found_contact(int j, PhoneBook Book);

#endif