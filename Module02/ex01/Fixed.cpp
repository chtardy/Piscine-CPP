/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:37:50 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/28 21:24:33 by ctardy           ###   ########.fr       */
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
   this->_entier = static_cast<int>(roundf(IntNumber * (1 << _entier_statique)));
}

Fixed::Fixed(float FloatNumber) {
   std::cout << "Float constructor called" << std::endl;
   this->_entier = static_cast<int>(roundf(FloatNumber * (1 << _entier_statique)));
}

Fixed::Fixed (const Fixed &obj){
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed &ope){
    if (this != &ope) {
		std::cout << "Copy assignment operator called" << std::endl;
		this->_entier = ope._entier;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}