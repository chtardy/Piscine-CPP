 #ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "iostream"
#include <unistd.h>

class Animal {

	protected : 
		std::string _type;
		std::string _sound;

	public :
		Animal();
		Animal(std::string type);
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();


		virtual void makeSound() const = 0;
		std::string getType() const;
		std::string getSound() const;
};

void type_text(std::string text, int flag);

#endif