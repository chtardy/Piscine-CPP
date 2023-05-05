#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "iostream"
#include <unistd.h>
#include <sstream>
#include <string>


class ClapTrap {

	private : 
		std::string _name;
		int HP;
		int EP;
		int AD;
		const std::string red;
		const std::string green;
		const std::string yellow;
		const std::string blue;
		const std::string reset;


	public :
		std::string getName();
		int getAD();
		int getHP();

		void setHP(int amount);

		void colorWord(std::string &str, const std::string &word, const std::string &color);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		// void beRepaired(unsigned int amount);

		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		
};

void type_text(std::string text, int flag);
void type_int(int num);

#endif