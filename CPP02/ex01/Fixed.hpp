/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:57:59 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:58:33 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
};

	std::ostream &operator<<(std::ostream &out, Fixed const & a);

#endif