/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:42:13 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/23 20:36:20 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	std::cout << "Constructor HumanB with name "  << '"' + this->_name + '"' << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructor HumanB " << '"' + this->_name + '"' <<  std::endl;
}

void HumanB::HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}

void HumanB::HumanB::attack()
{
	if (!this->_weapon){
		std::cout << this->_name << " can't attack without a weapon !" << std::endl;
		return;
	}
	std::cout << _name << " attacks with their " << '"' + this->_weapon->getType() + '"' << std::endl;
}