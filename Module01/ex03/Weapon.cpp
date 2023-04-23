/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:01:39 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/23 20:31:44 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon(std::string name)
{
	this->setType(name);
	std::cout << "Constructor Weapon " << '"' + this->getType() + '"' << std::endl;
}

Weapon::Weapon(){
	std::cout << "Constructor Weapon by default called" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Destructor Weapon " << '"' + this->getType() + '"' << std::endl;
}

const std::string& Weapon::getType() const {
    return _type;
}

void Weapon::setType(std::string newType) {
    _type = newType;
}