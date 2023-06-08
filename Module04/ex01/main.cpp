/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:07:18 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/11 13:15:33 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main() {

	Animal *tab[10];
	int i = 0;
	for (; i < 5; i++) {
		tab[i] = new Dog();
	}
	for (; i < 10; i++) {
		tab[i] = new Cat();
	}
	i = 0;
	tab[0]->makeSound();
	tab[4]->makeSound();
	tab[6]->makeSound();
	tab[9]->makeSound();

	for (; i < 10; i++) {
		delete tab[i];
	}
	// system ("Leaks brain");
	return 0;
}