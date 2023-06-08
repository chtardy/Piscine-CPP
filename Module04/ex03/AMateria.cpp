/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:24:37 by ctardy            #+#    #+#             */
/*   Updated: 2023/06/08 12:55:20 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

	AMateria::AMateria() {
		_type = "ice";
		// std::cout << "Constructorz de AMateria by default" << std::endl;
	}

	AMateria::AMateria(std::string const & type) {
		_type = type;
		// std::cout << "Constructorz de AMateria with type specified" << std::endl;
	}
	
	AMateria::AMateria(const AMateria &other)
	{
		*this = other;
	}
	
	AMateria &AMateria::operator=(const AMateria &other)
	{
		if (this != &other)
			_type = other._type;
		return (*this);
	}
	
	AMateria::~AMateria() {
		// std::cout << "Destructorz de AMateria" << std::endl;
	}

	std::string const &AMateria::getType() const {
		return _type;	
	}
	
	void AMateria::use(ICharacter& target) {
		(void)target;
	}







		