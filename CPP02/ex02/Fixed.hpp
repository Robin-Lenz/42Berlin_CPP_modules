#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
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
	float toFloat( void ) const;
	int toInt( void ) const;
	bool operator>(const Fixed &a)const;
	bool operator<(const Fixed &a)const;
	bool operator>=(const Fixed &a)const;
	bool operator<=(const Fixed &a)const;
	bool operator==(const Fixed &a)const;
	bool operator!=(const Fixed &a)const;
	float operator+(const Fixed &a)const;
	float operator-(const Fixed &a)const;
	float operator*(const Fixed &a)const;
	float operator/(const Fixed &a)const;
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	static const Fixed &min(Fixed const &a, Fixed const &b);
	static Fixed &min(Fixed &a, Fixed &b);

	static const Fixed &max(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
};


	std::ostream &operator<<(std::ostream &out, Fixed const & a);

#endif