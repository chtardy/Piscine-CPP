#ifndef DOG_HPP
# define DOG_HPP

#include "iostream"
#include <unistd.h>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	private : 
		Brain *_brain;

	public :
		Dog();
		Dog(std::string type);
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();

		virtual void makeSound() const ;
};

void type_text(std::string text, int flag);

#endif