/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:04:27 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/30 20:11:23 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

int main() {
	Fixed objet1(10);
	Fixed objet2(100);

	if (objet1 == objet2) {
		std::cout << "(==) objet1 est égal à objet2" << std::endl;
		std::cout << "(>=) objet1 est plus grand ou égal à objet2" << std::endl;
		std::cout << "(<=) objet1 est plus petit ou égal à objet2" << std::endl;
		return 0;
	} else {
		std::cout << "(==) objet1 est différent d'objet2" << std::endl;
	}

	if (objet1 != objet2) {
		std::cout << "(!=) objet1 est différent d'objet2" << std::endl;
	} else {
		std::cout << "(!=) objet1 est égal à objet2" << std::endl;
	}

	if (objet1 > objet2) {
		std::cout << "(>) objet1 est plus grand que objet2" << std::endl;
	} else {
			std::cout << "(>) objet1 est plus petit que objet2" << std::endl;
	}

	if (objet1 < objet2) {
		std::cout << "(<) objet1 est plus petit que objet2" << std::endl;
	} else {
		std::cout << "(<) objet1 est plus grand que objet2" << std::endl;
	}

	if (objet1 >= objet2) {
		std::cout << "(>=) objet1 est plus grand ou égal à objet2" << std::endl;
	} else {
		std::cout << "(>=) objet1 est plus petit ou égal à objet2" << std::endl;
	}

	if (objet1 <= objet2) {
		std::cout << "(<=) objet1 est plus petit ou égal à objet2" << std::endl;
	} else {
		std::cout << "(<=) objet1 est plus grand ou égal à objet2" << std::endl;
	}

}