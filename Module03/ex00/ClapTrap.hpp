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
		int HPMax;
		int EP;
		int AD;
		int DMG;
		const std::string red;
		const std::string green;
		const std::string yellow;
		const std::string blue;
		const std::string white;
		const std::string reset;


	public :
		void colorName(const std::string &color);

		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();

		std::string getName();
		std::string getColor(std::string color);
		int getAD();
		int getHP();
		int getDMG();

		void setHP(int amount);
		void setEP();

		void checkHP();
		void checkup();
	
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		
};

void type_text(std::string text, int flag);
void type_int(int num);

#endif