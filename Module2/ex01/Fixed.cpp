/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:37:50 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/25 17:05:43 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void Fixed::setRawBits( int const raw ){
	this->_entier = raw;
}

int Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called    " << std::endl;
	return _entier;
}

int Fixed::toInt ( void ) const{
	return this->getRawBits() / (1 << 8);
}

float Fixed::toFloat(void) const{
	return this->getRawBits() / 256.0f;
}

// Constuctorz ----------------

Fixed::Fixed(){
	this->_entier = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int IntNumber) {
   std::cout << "Int constructor called" << std::endl;
   this->_entier = IntNumber << _entier_statique;
   std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float FloatNumber) {
   std::cout << "Float constructor called" << std::endl;
    this->_entier = FloatNumber * (1 << _entier_statique);
}

Fixed::Fixed (const Fixed &obj){
	*this = obj;
	std::cout << "Copy assignment called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &ope){
    if (this != &ope) {
		this->_entier = ope._entier;
    }
	std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}