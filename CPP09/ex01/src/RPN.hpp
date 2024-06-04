/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-30 15:30:56 by robin             #+#    #+#             */
/*   Updated: 2024-05-30 15:30:56 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <stdlib.h>


class RPN {
	private:
		int _result;
		std::stack<int> _stack;

	public:
		RPN();
		RPN(const RPN &a);
		~RPN();

		RPN &operator=(const RPN &a);
	class Error : std::exception
	{
		private:
			std::string _msg;
		public:
			explicit Error(std::string const &msg);
			~Error()throw();
			const char *what()throw();
	};

		int getResult() const;
		void polishExpression(char *problem);
		void solveterm(int numone, int numtwo, char c);
};

#endif