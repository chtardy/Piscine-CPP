/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 04:51:09 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/05 06:54:53 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : red("\033[0;31m"), green("\033[32m"), yellow("\033[33m"), blue("\033[34m"), reset("\033[0m") {
	type_text("Constructorz by default called", 1);
	HP = 10;
	EP = 10;
	AD = 0;
}

ClapTrap::ClapTrap(std::string name) : red("\033[0;31m"), green("\033[32m"), yellow("\033[33m"), blue("\033[34m"), reset("\033[0m") {
	type_text("Constructorz with name called : ", 0);
	type_text(name, 1);
	_name = name;
	HP = 10;
	EP = 10;
	AD = 0;
}

ClapTrap::~ClapTrap() {
	type_text("Destructorz called : ", 0);
	type_text(this->_name, 1);
}

// --------------------------------------------

std::string ClapTrap::getName() {
	return _name;
}

int ClapTrap::getAD() {
	return AD;
}

int ClapTrap::getHP() {
	return HP;
}


void ClapTrap::setHP(int amount) {
	this->HP = amount;
}

// --------------------------------------------
void ClapTrap::colorWord(std::string &str, const std::string &word, const std::string &color) {
    std::size_t pos = 0;
    while ((pos = str.find(word, pos)) != std::string::npos) {
        str.insert(pos, color);
        pos += color.length() + word.length();
        str.insert(pos, reset);
        pos += reset.length();
    }
}

void ClapTrap::attack(const std::string &target) {
    std::ostringstream oss;
    std::ostringstream oss2;
	
	oss << "ClapTrap " <<_name << " attacks " << target;
    std::string result = oss.str();
	colorWord(result, "Bertrand", yellow);
	colorWord(result, target, green);
    type_text(result, 0);
	
	oss2 << ", causing " << red << AD << reset << " point(s) of damage !" << std::endl;
    result.assign(oss2.str());
    type_text(result, 0);
    return ;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << _name << " has take " << amount << " point(s) of damage !" << std::endl;
	this->setHP((this->getHP() - amount));
	// type_text("")
}