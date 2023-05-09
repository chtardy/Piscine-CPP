/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:11:01 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/09 16:41:12 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() {
	type_text("Constructorz for Diamond called", 1);
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name), _name(name) {
	ClapTrap::_name= _name  + "_clap_name";
	DHP = 100;
	DEP = 50;
	DAD = 20;
	type_text("Constructorz with arg name for Diamond", 1);
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	this->_name = other._name;
	this->DHP = other.DHP;
	this->DEP = other.DEP;
	this->DAD = other.DAD;
	return (*this);
}

	void DiamondTrap::whoAmI() {
		std::cout << "I am " << _name << " and my ClapTrap's name is " << ClapTrap::_name << std::endl;
	}

DiamondTrap::~DiamondTrap() {
	type_text("Destructorz for Diamond called", 1);
}
