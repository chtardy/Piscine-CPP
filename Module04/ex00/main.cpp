/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:07:18 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/10 13:26:16 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	type_text("----------------------", 1);
	
	const WrongAnimal* WrongMeta = new WrongAnimal();
	const WrongAnimal* Kitty = new WrongCat();
	std::cout << Kitty->getType() << " " << std::endl;
	WrongMeta->makeSound();
	Kitty->makeSound();
	delete meta;
	delete i;
	delete j;
	delete Kitty;
	delete WrongMeta;
	return 0;
}