/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:05:48 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/20 16:28:23 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

	Ice::Ice() : AMateria("ice") {
		// std::cout << "Constructorz de Ice by default" << std::endl;
	}

	Ice::Ice(const Ice &other) : AMateria(other) {
		(void)other;
	}
	
	Ice &Ice::operator=(const Ice &other)
	{
		this->AMateria::operator=(other);
		return (*this);
	}

	Ice::~Ice() {
		// std::cout << "Destructorz de Ice by default" << std::endl;
	}
	
	AMateria *Ice::clone() const{
		return (new Ice(*this));
	}
	
	void Ice::use(ICharacter& target) {
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	}
