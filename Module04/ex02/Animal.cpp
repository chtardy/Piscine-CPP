/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:36:58 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/10 13:36:59 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Canonical --------------------------------------------

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	_type = other._type;
	return (*this);
}

// Constructorz -----------------------------------------

Animal::Animal() {
	type_text("Constructorz Animal by default called", 1);
	_type = "Animal";
	_sound = "Random Sound";
}

Animal::Animal(std::string type) {
	_type = type;
	_sound = "Random Sound";
	type_text("Constructorz Animal with type called : ", 0);
	type_text(_type, 1);
}

Animal::~Animal() {
	type_text("Destructorz Animal called : ", 0);
	type_text(_type, 1);
}

// Fonctions --------------------------------------------

void Animal::makeSound() const {
	type_text("This Animal goes ", 0);
	type_text(_sound, 1);
}

std::string Animal::getType() const {
	return _type;
} 

std::string Animal::getSound() const {
	return _sound;
} 

 