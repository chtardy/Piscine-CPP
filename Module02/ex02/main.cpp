/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:04:27 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/05 01:21:59 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


void compare (Fixed &object1, Fixed &object2){
	
	if (object1 == object2) {
		std::cout << "(==) object1 est égal à object2" << std::endl;
		std::cout << "(>=) object1 est plus grand ou égal à object2" << std::endl;
		std::cout << "(<=) object1 est plus petit ou égal à object2" << std::endl;
		return;
	} else {
		std::cout << "(==) object1 est différent d'object2" << std::endl;
	}

	if (object1 != object2) {
		std::cout << "(!=) object1 est différent d'object2" << std::endl;
	} else {
		std::cout << "(!=) object1 est égal à object2" << std::endl;
	}

	if (object1 > object2) {
		std::cout << "(>) object1 est plus grand que object2" << std::endl;
	} else {
			std::cout << "(>) object1 est plus petit que object2" << std::endl;
	}

	if (object1 < object2) {
		std::cout << "(<) object1 est plus petit que object2" << std::endl;
	} else {
		std::cout << "(<) object1 est plus grand que object2" << std::endl;
	}

	if (object1 >= object2) {
		std::cout << "(>=) object1 est plus grand ou égal à object2" << std::endl;
	} else {
		std::cout << "(>=) object1 est plus petit ou égal à object2" << std::endl;
	}

	if (object1 <= object2) {
		std::cout << "(<=) object1 est plus petit ou égal à object2" << std::endl;
	} else {
		std::cout << "(<=) object1 est plus grand ou égal à object2" << std::endl;
	}

}

int	main(void)
{
	Fixed a;
	Fixed f;
	f.setRawBits(888);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const d( Fixed( 5.05f ) - Fixed( 2 ) );
	Fixed const e( Fixed( 5.05f ) / Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << f << std::endl;

	std::cout << Fixed::max( a, f ) << std::endl;
	std::cout << Fixed::max( c, e ) << std::endl;
	std::cout << Fixed::min( a, f ) << std::endl;
	std::cout << Fixed::min( c, e ) << std::endl;	

	// 0
	// 0.00390625
	// 0.00390625
	// 0.00390625
	// 0.0078125
	// 10.1016
	// 10.1016


	return (0);
}