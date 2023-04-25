/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:37:50 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/25 13:36:30 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void Fixed::setRawBits( int const raw ){
	this->_entier = raw;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called    " << std::endl;
	return _entier;
}

Fixed::Fixed(){
	this->_entier = 0;
	std::cout << "Default constructor called" << std::endl;
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