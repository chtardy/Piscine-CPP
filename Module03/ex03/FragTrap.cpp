/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:10:13 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/09 16:40:05 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	type_text("Constructorz Frag by default : ", 1);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30), _nameDaughter(name) {
	type_text("Constructorz Frag with stats : ", 0);
	type_text(_nameDaughter, 1);
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->_name = other._name;
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
	return (*this);
}

FragTrap::~FragTrap() {
	type_text("Destructorz Frag : ", 0);
	type_text(_nameDaughter, 1);
}

void FragTrap::highFivesGuys(void){
	std::string catchh;
	while (1) {
		if(std::cin.eof()) {
			type_text("Ok nevermind i shut up then 🙄", 1);
			exit(0);
		}
		type_text("\033[33;1mHigh five ?? (write yes or no) :\033[0m", 1);
		getline(std::cin, catchh);
		if (catchh == "yes") {
			type_text("Yeahhh 🖐", 1);
			break;
		}
		else if (catchh == "no") {	
			type_text("Oh ... Ok ... 🙁", 1);
			break;
		}
		type_text("Is that so hard to just say yes or no ? 😬", 1);
		}
	}



void FragTrap::colorNameDaughter(const std::string &color) {
    int length = _nameDaughter.length();
	int pos = 0;
    _nameDaughter.insert(0, color);
    pos = length + color.length();
    _nameDaughter.insert(pos, reset);
}