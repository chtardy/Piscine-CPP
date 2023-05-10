/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:10:12 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/10 14:38:56 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

// Canonical --------------------------------------------

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	_type = other._type;
	return (*this);
}

// Constructorz -----------------------------------------

Dog::Dog() : Animal() {
	_type = "Dog";
	_sound = "waf waf 🐶";
	_brain = new Brain();
	type_text("Constructorz Dog by default called", 1);
}

Dog::Dog(std::string type) : Animal(type) {
	_type = "Dog";
	_sound = "waf waf";
	type_text("Constructorz Dog with type called : ", 0);
	type_text(_type, 1);
}

Dog::~Dog() {
	type_text("Destructorz Dog called : ", 0);
	type_text(_type, 1);
	delete _brain;
}

// Fonctions --------------------------------------------

void Dog::makeSound() const {
	type_text("This Dog goes ", 0);
	type_text(_sound, 1);
}

// std::string Dog::getType() {
// 	return _type;
// } 

// std::string Dog::getSound() {
// 	return _sound;
// } 

