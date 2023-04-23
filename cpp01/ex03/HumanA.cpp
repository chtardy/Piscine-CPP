/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:14:47 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/06 21:35:53 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){
	std::cout << "Constructor HumanA with name " << '"' + this->_name + '"' << " and weapon " << '"' + this->_weapon.getType() + '"' << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor HumanA " << '"' + this->_name + '"' << std::endl;
}

void HumanA::HumanA::attack()
{
	std::cout << _name << " attacks with their " << '"' + this->_weapon.getType() + '"' << std::endl;
}