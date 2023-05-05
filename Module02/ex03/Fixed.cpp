/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:37:50 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/05 01:18:44 by ctardy           ###   ########.fr       */
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

// Constructorz ----------------

Fixed::Fixed(){
	this->_entier = 0;
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int IntNumber) {
//    std::cout << "Int constructor called" << std::endl;
   this->_entier = static_cast<int>(roundf(IntNumber * (1 << _entier_statique)));
}

Fixed::Fixed(float FloatNumber) {
//    std::cout << "Float constructor called" << std::endl;
   this->_entier = static_cast<int>(roundf(FloatNumber * (1 << _entier_statique)));
}

Fixed::Fixed (const Fixed &obj){
	// std::cout << "Copy constructor called" < std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &ope){
    if (this != &ope) {
		// std::cout << "Copy assignment operator called" << std::endl;
		this->_entier = ope._entier;
    }
    return *this;
}

// Operateur de comparaison ----------------

bool Fixed::operator>(const Fixed &ope){
	return this->_entier > ope._entier;
}

bool Fixed::operator<(const Fixed &ope){
	return this->_entier < ope._entier;
}

bool Fixed::operator>=(const Fixed &ope){
	return this->_entier >= ope._entier;
}

bool Fixed::operator<=(const Fixed &ope){
	return this->_entier <= ope._entier;
}

bool Fixed::operator==(const Fixed &ope){
	return this->_entier == ope._entier;
}

bool Fixed::operator!=(const Fixed &ope){
	return this->_entier != ope._entier;
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}

// Operateur arithmetique ----------------

Fixed Fixed::operator+(const Fixed &ope){
	return (this->toFloat() + ope.toFloat());
}

Fixed Fixed::operator-(const Fixed &ope){
	return this->toFloat() - ope.toFloat();
}

Fixed Fixed::operator*(const Fixed &ope){
	return this->toFloat() * ope.toFloat();
}

Fixed Fixed::operator/(const Fixed &ope){
	if (this->_entier != 0 && ope._entier != 0){
		return this->toFloat() / ope.toFloat();
	}
	std::cout << "Can't divide by zero" << std::endl;
	return this->_entier;
}

// Incrementation ----------------

Fixed &Fixed::operator++() {
	++this->_entier;
	return *this;
}

Fixed Fixed::operator++(int incr) {
	Fixed inter = *this;
	++this->_entier;
	return inter;
}

Fixed &Fixed::operator--(){
	--this->_entier;
	return *this;
}

Fixed Fixed::operator--(int incr) {
	Fixed inter = *this;
	--this->_entier;
	return inter;
}

// Min et Max ----------------

Fixed Fixed::min(Fixed &a, Fixed &b){
	// std::cout << "static min is used" << std::endl;
	return (a._entier > b._entier ? b : a);
};

const Fixed Fixed::min(const Fixed &a, const Fixed &b){
	// std::cout << "const min is used" << std::endl;
	return (a._entier > b._entier ? b : a);
};

Fixed Fixed::max(Fixed &a, Fixed &b){
	// std::cout << "static max is used" << std::endl;
	return (a._entier > b._entier ? a : b);
};

const Fixed Fixed::max(const Fixed &a, const Fixed &b){
	// std::cout << "const max is used" << std::endl;
	return (a._entier > b._entier ? a : b);
};

// Destructorz ----------------

Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;
}
