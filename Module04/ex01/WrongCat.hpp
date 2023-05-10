#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "iostream"
#include <unistd.h>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	private : 

	public :
		WrongCat();
		WrongCat(std::string type);
		WrongCat(const WrongCat &other);
		WrongCat &operator=(const WrongCat &other);
		~WrongCat();

		void makeSound() const ;
		// std::string getType();
		// std::string getSound();
};

void type_text(std::string text, int flag);

#endif