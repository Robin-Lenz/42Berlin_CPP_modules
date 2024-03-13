#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
	private:
		/* data */
	public:
		Brain(/* args */);
		Brain(Brain &a);
		~Brain();

		Brain &operator=(const Brain &a);
		std::string ideas[100];
};

#endif