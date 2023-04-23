/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:25:03 by ctardy            #+#    #+#             */
/*   Updated: 2023/03/31 16:15:00 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->set_name(name);
	std::cout << name << ": has been create" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->get_name() << " has gone away" << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}

std::string Zombie::get_name()
{
	return this->_name;
}

void Zombie::announce(void)
{
	_name = this->get_name();
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
