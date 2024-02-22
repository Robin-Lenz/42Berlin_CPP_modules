#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
private:
	int _num;
	static const int _num_fractional_bits = 8;
public:
	Fixed();
	Fixed(Fixed &a);
	void cpy_op_overload();
	~Fixed();

	Fixed &operator=(const Fixed &a);
	int getRawBits(void)const;
	void setRawBits(int const raw);
};


#endif