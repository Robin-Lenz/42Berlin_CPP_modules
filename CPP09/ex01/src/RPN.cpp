/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-30 15:31:09 by robin             #+#    #+#             */
/*   Updated: 2024-05-30 15:31:09 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::Error::Error(std::string const &msg) : _msg(msg){

}

RPN::Error::~Error()throw(){}

const char *RPN::Error::what()throw(){
	return(_msg.c_str());
}

RPN::RPN() : _result(0){
	
};

RPN::RPN(const RPN &a){
	*this = a;
};

RPN::~RPN(){
	
};

RPN &RPN::operator=(const RPN &a){
	_result = a._result;
	_stack = a._stack;
	return(*this);
};

int RPN::getResult() const{
	return(_result);
}

void RPN::polishExpression(char *problem){
	std::string node;
	int counter = 0;
	char digit;
	while (problem[counter])
	{
		digit = problem[counter];
		int num = atoi(&digit);
		if (digit == ' '){
			counter++;
			continue;
		}
		else if (digit == '+' || digit == '-' || digit == '*' || digit == '/'){
			if (_stack.size() < 2){
				throw Error("Error: not emough operands");
			}
			int numone = _stack.top();
			_stack.pop();
			int numtwo = _stack.top();
			_stack.pop();
			solveterm(numone, numtwo, digit);
		}
		else if (isdigit(num) == 0){
			_stack.push(num);
		}
		counter++;
	}
	if (_stack.size() != 1){
		throw Error("Error: too many operands");
	}
	_result = _stack.top();
	_stack.pop();
}

void RPN::solveterm(int numone, int numtwo, char c){
	if (c == '+')
		_stack.push(numone + numtwo);
	if (c == '-')
		_stack.push(numtwo - numone);
	if (c == '*')
		_stack.push(numone * numtwo);
	if (c == '/'){
		if (numtwo == 0)
			throw Error("Error: division by 0 is not defined");
		_stack.push(numone / numtwo);
	}
}