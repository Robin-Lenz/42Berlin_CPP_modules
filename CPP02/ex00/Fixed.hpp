/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:57:48 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:57:49 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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