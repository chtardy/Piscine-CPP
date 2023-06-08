#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "iostream"
#include <unistd.h>

class Brain {

	protected : 
		std::string ideas[100];

	public :
		Brain();
		// Brain(std::string type);
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		virtual ~Brain();
};

void type_text(std::string text, int flag);

#endif