/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 04:51:09 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/09 13:22:00 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::colorName(const std::string &color) {
    int length = _name.length();
	int pos = 0;
    _name.insert(0, color);
    pos = length + color.length();
    _name.insert(pos, reset);
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
	return (*this);
}

// Constructorz --------------------------------------------

ClapTrap::ClapTrap() : red("\033[0;31;1m"), green("\033[32;1m"), yellow("\033[33;1m"), blue("\033[34;1m"), white("\033[37;1m"), reset("\033[0m") {
	type_text("Constructorz Crap by default called", 1);
	HP = 10;
	HPMax = HP;
	EP = 10;
	AD = 0;
	DMG = 0;
}

ClapTrap::ClapTrap(std::string name) : red("\033[0;31;1m"), green("\033[32;1m"), yellow("\033[33;1m"), blue("\033[34;1m"), white("\033[37;1m"), reset("\033[0m") {
	_name = name;
	type_text("Constructorz Crap with name called : ", 0);
	type_text(name, 1);
	HP = 10;
	HPMax = HP;
	EP = 10;
	AD = 2;
	DMG = 0;
}

ClapTrap::ClapTrap(std::string name, int HPset, int EPset, int ADset) : red("\033[0;31;1m"), green("\033[32;1m"), yellow("\033[33;1m"), blue("\033[34;1m"), white("\033[37;1m"), reset("\033[0m") {
	_name = name;
	type_text("Constructorz Crap with stats called : ", 0);
	type_text(name, 1);
	HP = HPset;
	HPMax = HP;
	EP = EPset;
	AD = ADset;
	DMG = 0;
}

ClapTrap::~ClapTrap() {
	type_text("Destructorz Crap called : ", 0);
	type_text(this->_name, 1);
}

// Getterz --------------------------------------------

std::string ClapTrap::getName() {
	return _name;
}

int ClapTrap::getAD() {
	return AD;
}

int ClapTrap::getEP() {
	return EP;
}

int ClapTrap::getHP() {
	return HP;
}

int ClapTrap::getDMG() {
	int FinalDMG = DMG;
	DMG = 0;
	return FinalDMG;
}

std::string ClapTrap::getColor(std::string color) {
	return color == "red" ? red :
		color == "green" ? green :
		color == "yellow" ? yellow :
		color == "blue" ? blue : 
		color == "white" ? white : NULL;
}

// Setterz --------------------------------------------

void ClapTrap::setHP(int amount) {
	this->HP = amount;
}

void ClapTrap::setEP() {
	EP -= 1;
}

// Checkerz --------------------------------------------

void ClapTrap::checkHP() {
	if (HP == 0) {
		std::string catchh = _name + " is dead ! 💀";
		type_text(catchh, 1);
	}
}
void ClapTrap::checkup() {
	std::ostringstream oss;
	std::string catchh;
	oss << _name << " has right now :" << std::endl
	<< " * " << green << HP << reset << " HP ! 🧪" << std::endl
	<< " * " << blue << EP << reset << " EP ! 🌟" << std::endl;
	catchh = oss.str();
	type_text(catchh, 0);
}

// Actionz --------------------------------------------

void ClapTrap::attack(const std::string &target) {
	std::ostringstream oss;
	if (EP == 0) {
		oss << _name << " has no more EP, he can't attack anymore 🤖";
		type_text(oss.str(), 1);
		return;
	}
	else if (HP == 0) { 
		oss << _name << " died, he can't attack anymore 🎚";
		type_text(oss.str(), 1);
		return;
	}
	oss << "ClapTrap " <<_name << " attacks " << target;
    std::string result = oss.str();
    type_text(result, 0);
	oss.str("");
	oss << ", causing " << red << AD << reset << " point(s) of damage ! 🔪" << std::endl;
    result.assign(oss.str());
    type_text(result, 0);
	oss.str("");
	setEP();
	oss << _name << "has now " << blue << EP << reset << " EP ! 🌟";
	DMG += AD;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::ostringstream oss;
    if (HP == 0) { 
		oss << _name << " is already dead 😵";
		type_text(oss.str(), 1);
		return;
	}
	std::string catchh;
	int baseHP = getHP();
	oss << _name << " has taken " << red <<  amount << reset << " point(s) of damage ! 🤕" << std::endl;
	catchh = oss.str();
	type_text(catchh, 0);
	if (amount > baseHP) {
		amount = baseHP;
	}
	setHP((baseHP - amount));
	oss.str("");
	oss << _name << " has now " << green << HP << reset << " HP ! 🧪" << std::endl;
	catchh.assign(oss.str());
	type_text(catchh, 0);
	checkHP();
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::ostringstream oss;
	std::string catchh;
	if (EP == 0) {
		oss << _name << " has no more EP, he can't repair himself anymore 🤖";
		type_text(oss.str(), 1);
		return;
	}
	else if (HP == 0) { 
		oss << _name << " died, it's too late for repair himself 🎚";
		type_text(oss.str(), 1);
		return;
	}
	oss << _name << " repair his wounds and get " << green << amount << " HP back ! ⛏🧰" << std::endl;
	catchh = oss.str();
	type_text(catchh, 0);
	if (amount + getHP() > HPMax) {
		amount = HPMax - getHP();
	}
	setHP(getHP() + amount);
	oss.str("");
	oss << _name << " have now " << green << getHP() << reset << " HP ! 🔩" << std::endl;
	catchh.assign(oss.str());
	type_text(catchh, 0);
	
}