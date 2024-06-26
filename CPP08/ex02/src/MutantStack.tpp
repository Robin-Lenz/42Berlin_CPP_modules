/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:26:07 by rpodack           #+#    #+#             */
/*   Updated: 2024/05/22 18:26:08 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T, class Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>(){
	
};

template<typename T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack &a): std::stack<T, Container>(a){

};

template<typename T, class Container>
MutantStack<T, Container>::~MutantStack(){
	
};

template<typename T, class Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &a){
	std::stack<T, Container>::operator=(a);
	return (*this);
};

template<typename T, class Container>
typename MutantStack<T, Container>::it MutantStack<T, Container>::begin(){
	return (this->c.begin());
}

template<typename T, class Container>
typename MutantStack<T, Container>::it MutantStack<T, Container>::end(){
	return (this->c.end());
}