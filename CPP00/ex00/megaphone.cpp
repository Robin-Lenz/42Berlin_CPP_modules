/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:55:03 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:55:04 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	char	c;
	int		i = 0;
	int		j = 0;

	if (ac == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i++;
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				c = std::toupper(av[i][j]);
				std::cout << c;
				j++;
			}
			i++;
		}
	}
	std::cout<<"\n";
	return (0);
}
