#include "addr.class.hpp"

int	Contacts::get_index(){
	return (this->_index);
}

void Contacts::increase_index(){
	this->_index++;
	return ;
}

PhoneBook::PhoneBook(int nb) : _num(nb){
	return ;
}

PhoneBook::~PhoneBook(void){
	return ;
}

void	print_contact(int j, Contacts *cons){
	std::cout << cons[j].get_index();
	std::cout << " | ";

	std::cout << std::setw(10) << std::right << cons[j].get_name();
	std::cout << " | ";

	std::cout << std::setw(10) << std::right << cons[j].get_lastname();
	std::cout << " | ";

	std::cout << std::setw(10) << std::right << cons[j].get_nickname();
	std::cout << " | ";

	std::cout << std::setw(10) << std::right << cons[j].get_secret();
	std::cout << " | ";

	std::cout << cons[j].get_phone() << std::endl;
}

void	found_contact(int j, Contacts *cons){
	std::cout << "Index:" << std::endl;
	std::cout << std::setw(10) << std::right << cons[j].get_index() << std::endl;
	std::cout << "name:" << std::endl;

	std::cout << std::setw(10) << std::right << cons[j].get_name() << std::endl;
	std::cout << "lastname:" << std::endl;

	std::cout << std::setw(10) << std::right << cons[j].get_lastname() << std::endl;
	
	std::cout << "nickname:" << std::endl;
	std::cout << std::setw(10) << std::right << cons[j].get_nickname() << std::endl;
	
	std::cout << "your darkest secret:" << std::endl;
	std::cout << std::setw(10) << std::right << cons[j].get_secret() << std::endl;

	std::cout << "your phonenumber:" << std::endl;
	std::cout << cons[j].get_phone() << std::endl;
}

std::string	cut_string(std::string str){
	str = str.substr(0, 10);
	str[9] = '.';
	return (str);
}

void	PhoneBook::add_con(){
	std::string	name;
	std::string	lastname;
	std::string	phone;
	std::string	nickname;
	std::string	secret;

	if (this->_num >= 8)
		this->_num = 7;
	std::cout << "Enter a new contact:\n";
	std::cout << "enter a name" << std::endl;
	std::cin >> name;
	if (name.length() > 10)
		name = cut_string(name);
	std::cout << "enter a lastname" << std::endl;
	std::cin >> lastname;
	if (lastname.length() > 10)
		lastname = cut_string(lastname);
	std::cout << "enter your nickname" << std::endl;
	std::cin >> nickname;
	if (nickname.length() > 10)
		nickname = cut_string(nickname);
	std::cout << "enter your darkest secret" << std::endl;
	std::cin >> secret;
	if (secret.length() > 10)
		secret = cut_string(secret);
	std::cout << "enter a phonenumber" << std::endl;
	std::cin >> phone;
	// soll phone auch abgeschnitten werden ?

	/*move each contact*/
	for (int i = this->_num; i > 0 && i < 8; i--)
	{
		this->cons[i] = this->cons[i - 1];
		this->cons[i].increase_index();
	}
	this->cons[0].assign_data(name, lastname, phone, nickname, secret);
	this->cons[0].assign_index(1);
	this->_num++;
	return ;
}

void	Contacts::assign_data(std::string name, std::string lastname, std::string phone, std::string nickname,std::string secret){
	this->_name = name;
	this->_lastname = lastname;
	this->_phone = phone;
	this->_nickname = nickname;
	this->_secret = secret;
}

void	PhoneBook::search(std::string tmp, std::string buff){
	if (this->_num > 8)
		this->_num = 8;
	size_t pos = buff.find(' ');
	tmp = buff.substr(pos + 1);
	if (tmp.length() == 1 && buff.length() != 1){
		std::string	nums = "12345678";
		pos = nums.find(tmp[0]);
		if (pos < 9 && tmp[0] == nums[pos]){
			for (int k = 0; k < this->_num; k++){
				std::stringstream ss;
				ss << this->cons[k].get_index();
				std::string strNumber = ss.str();
				if (strNumber == tmp)
					found_contact(k, this->cons);
			}
		}
		else
			std::cout << "this phonebook can store 8 contacts max" << std::endl;
	}
	else
		for (int j = this->_num - 1; j >= 0 && j < 8; j--)
			print_contact(j, this->cons);

}

int	main(void){
	std::string		buff;
	std::string		tmp;
	PhoneBook		Book;

	std::cout << "ADD [1], SEARCH [2], EXIT [3]" << std::endl;
	std::cout << "enter command" << std::endl;
	while (std::getline(std::cin, buff)){
		if (buff == "ADD" || buff == "1"){
			Book.add_con();
			std::getline(std::cin, buff);
		}
		else if ((buff.compare(0, 6, "SEARCH", 0, 6) == 0 || buff[0] == '2'))
			Book.search(tmp, buff);
		else if (buff == "EXIT" || buff == "3")
			break;
		else
			std::cout << "Invalid entry" << std::endl;
		buff.clear();
		std::cout << "enter command" << std::endl;
	}
}