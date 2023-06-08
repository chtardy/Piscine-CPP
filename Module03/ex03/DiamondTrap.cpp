/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:11:01 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/09 14:46:59 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() {
	type_text("Constructorz for Diamond called", 1);
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name), _name(name) {
	_name = ScavTrap::_name;
	DHP = FragTrap::HP;
	DEP = ScavTrap::EP;
	DAD = FragTrap::AD;
	type_text("Constructorz with arg name for Diamond", 1);
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
		std::cout << "I am " << _name << " and my ClapTrap's name is " << ScavTrap::getName() << std::endl;
	}

DiamondTrap::~DiamondTrap() {
	type_text("Destructorz for Diamond called", 1);
}
