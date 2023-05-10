#ifndef CAT_HPP
# define CAT_HPP

#include "iostream"
#include <unistd.h>

#include "Animal.hpp"

class Cat : public Animal {

	private : 

	public :
		Cat();
		Cat(std::string type);
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		~Cat();

		virtual void makeSound() const ;
		// std::string getType();
		// std::string getSound();
};

void type_text(std::string text, int flag);

#endif