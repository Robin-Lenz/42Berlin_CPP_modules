/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:37:53 by rpodack           #+#    #+#             */
/*   Updated: 2024/05/22 18:02:58 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
	size_t count = 9;

	std::vector<int> vec ;
	for (size_t i = 0; i <= count; i++){
		vec.push_back(i);
	}
	try{
		easyfind(vec, 9);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	std::deque<int> deq ;
	for (size_t i = 0; i <= count; i++){
		deq.push_back(i);
	}
	try{
		easyfind(deq, 9);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	std::list<int> lis ;
	for (size_t i = 0; i <= count; i++){
		lis.push_back(i);
	}
	try{
		easyfind(lis, 9);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	return 0;
}