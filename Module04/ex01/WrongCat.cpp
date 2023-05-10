/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:11:34 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/10 14:00:24 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// Canonical --------------------------------------------

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	_type = other._type;
	return (*this);
}

// Constructorz -----------------------------------------

WrongCat::WrongCat() : WrongAnimal() {
	_type = "WrongCat";
	_sound = WrongAnimal::getSound();
	type_text("Constructorz WrongCat by default called", 1);
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
	_type = "WrongCat";
	_sound = WrongAnimal::getSound();
	type_text("Constructorz WrongCat with type called : ", 0);
	type_text(_type, 1);
}

WrongCat::~WrongCat() {
	type_text("Destructorz WrongCat called : ", 0);
	type_text(_type, 1);
}

// Fonctions --------------------------------------------

void WrongCat::makeSound() const {
	type_text("This WrongCat goes ", 0);
	type_text(WrongAnimal::getSound(), 1);
}

// std::string WrongCat::getType() {
// 	return _type;
// } 

// std::string WrongCat::getSound() {
// 	return _sound;
// } 

