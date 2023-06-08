/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:06:13 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/20 16:27:55 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

	Cure::Cure() : AMateria("cure"){
		// std::cout << "Constructorz de Cure by default" << std::endl;
	}

	Cure::Cure(const Cure &other) : AMateria(other) {
	}
	
	Cure &Cure::operator=(const Cure &other)
	{
		this->AMateria::operator=(other);
		return (*this);
	}

	Cure::~Cure() {
		// std::cout << "Destructorz de Cure" << std::endl;
	}
	
	AMateria *Cure::clone() const {
		return (new Cure (*this));
	}
	
	void Cure::use(ICharacter& target) {
		std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
	}
