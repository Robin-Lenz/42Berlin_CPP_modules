#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include <string>
#include <ostream>
#include <iostream>

struct Data{
	int value;
};

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer &a);
		~Serializer();
		Serializer &operator=(const Serializer &a);

	public:


		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		
		
		
		std::string getName() const;
};

#endif