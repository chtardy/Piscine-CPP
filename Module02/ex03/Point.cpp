/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 01:26:22 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/05 04:29:01 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Constructorz ----------------

Point::Point() : x(Fixed(0)), y(Fixed(0)) {
	// std::cout << "Constructeur par défaut" << std::endl;	
}

Point::Point(const float a, const float b) : x(Fixed(a)), y(Fixed(b)) {
	// std::cout << "Constructor with a couple of const float" << std::endl;	
}

Point::Point(const Point &obj) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Point &Point::operator=(const Point &ope) {
    if (this != &ope) {
		// std::cout << "Copy assignment operator called" << std::endl;
		// std::cout << "Const variable detected, value will stay by default" << std::endl;
    }
    return *this;
}

Point::~Point() {
	// std::cout << "Destructeur" << std::endl;	
}

// Getterz ----------------

const Fixed &Point::getX() const {
	return x;
}

const Fixed &Point::getY() const {
	return y;
}
