#ifndef DOG_HPP
# define DOG_HPP

#include "iostream"
#include <unistd.h>

#include "Animal.hpp"

class Dog : public Animal {

	private : 

	public :
		Dog();
		Dog(std::string type);
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();

		virtual void makeSound() const ;
		// std::string getType();
		// std::string getSound();
};

void type_text(std::string text, int flag);

#endif