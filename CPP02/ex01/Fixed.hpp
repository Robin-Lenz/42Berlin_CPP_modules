#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
private:
	int _num;
	int _fixed_num;
	static const int _num_fractional_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &a);
	Fixed(const int a);
	Fixed(const float a);
	~Fixed();


	Fixed &operator=(const Fixed &a);
	int getRawBits(void)const;
	void setRawBits(int const raw);
};


#endif