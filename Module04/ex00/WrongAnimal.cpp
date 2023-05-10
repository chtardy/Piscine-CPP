/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:18:21 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/10 13:18:55 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Canonical --------------------------------------------

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	_type = other._type;
	return (*this);
}

// Constructorz -----------------------------------------

WrongAnimal::WrongAnimal() {
	type_text("Constructorz WrongAnimal by default called", 1);
	_type = "WrongAnimal";
	_sound = "Wrong Random Sound";
}

WrongAnimal::WrongAnimal(std::string type) {
	_type = type;
	_sound = "Wrong Random Sound";
	type_text("Constructorz WrongAnimal with type called : ", 0);
	type_text(_type, 1);
}

WrongAnimal::~WrongAnimal() {
	type_text("Destructorz WrongAnimal called : ", 0);
	type_text(_type, 1);
}

// Fonctions --------------------------------------------

void WrongAnimal::makeSound() const {
	type_text("This WrongAnimal goes ", 0);
	type_text(_sound, 1);
}

std::string WrongAnimal::getType() const {
	return _type;
} 

std::string WrongAnimal::getSound() const {
	return _sound;
} 

 