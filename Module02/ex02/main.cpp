/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:04:27 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/30 20:54:35 by ctardy           ###   ########.fr       */
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

void plus(Fixed &object1, Fixed &object2)
{
	object1 + object2;
	std::cout << object1 << std::endl;
}

void sous(Fixed &object1, Fixed &object2)
{
	object1 - object2;
	std::cout << object1 << std::endl;
}
void multi(Fixed &object1, Fixed &object2)
{
	object1 * object2;
	std::cout << object1 << std::endl;
}
void divid(Fixed &object1, Fixed &object2)
{
	object1 / object2;
	std::cout << object1 << std::endl;
}

int main() {
	Fixed object1(110);
	Fixed object2(100);
	compare(object1, object2);
	plus(object1, object2);
	sous(object1, object2);
	multi(object1, object2);
	divid(object1, object2);
}