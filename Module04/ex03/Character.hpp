#ifndef CHARACTER_H
# define CHARACTER_H

#include "main.hpp"

class Character : public ICharacter {

	private :
		AMateria *_materias[4];
		std::string _name;
		Character() {}

	public :
		Character(std::string name);
		Character(const Character &other);
		Character &operator=(const Character &other);
		~Character();
		
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif