/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:59:17 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/10 14:38:52 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

// Canonical --------------------------------------------

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	_type = other._type;
	return (*this);
}

// Constructorz -----------------------------------------

Cat::Cat() : Animal() {
	_type = "Cat";
	_sound = "Miaouuu 🐱";
	_brain = new Brain();
	type_text("Constructorz Cat by default called", 1);
}

Cat::Cat(std::string type) : Animal(type) {
	_type = "Cat";
	_sound = "Miaouuu 🐱";
	type_text("Constructorz Cat with type called : ", 0);
	type_text(_type, 1);
}

Cat::~Cat() {
	type_text("Destructorz Cat called : ", 0);
	type_text(_type, 1);
	delete _brain;
}

// Fonctions --------------------------------------------

void Cat::makeSound() const {
	type_text("This Cat goes ", 0);
	type_text(_sound, 1);
}

// std::string Cat::getType() {
// 	return _type;
// } 

// std::string Cat::getSound() {
// 	return _sound;
// } 

