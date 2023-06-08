#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "iostream"
#include <unistd.h>

class WrongAnimal {

	protected : 
		std::string _type;
		std::string _sound;

	public :
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		virtual ~WrongAnimal();

		virtual void makeSound() const ;
		std::string getType() const;
		std::string getSound() const;
};

void type_text(std::string text, int flag);

#endif