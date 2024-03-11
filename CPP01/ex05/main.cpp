/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:57:22 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:57:23 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){
	Harl harry;

	harry.complain("debug");
	harry.complain("info");
	harry.complain("warning");
	harry.complain("error");
	return(0);
}
