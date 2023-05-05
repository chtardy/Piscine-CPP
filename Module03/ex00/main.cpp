/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 04:58:18 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/05 09:27:14 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

	ClapTrap Homme1("Bertrand");
	ClapTrap Homme2("Robert");
	Homme1.colorName(Homme1.getColor("yellow"));
	Homme2.colorName(Homme2.getColor("blue"));
	
	Homme1.attack(Homme2.getName());
	Homme1.attack(Homme2.getName());
	Homme1.attack(Homme2.getName());
	Homme2.takeDamage(Homme1.getDMG());
	Homme1.attack(Homme2.getName());
	Homme2.takeDamage(Homme1.getDMG());
	Homme2.beRepaired(2);
	Homme2.attack(Homme1.getName());
	Homme1.checkup();
	Homme2.checkup();
	Homme1.attack(Homme2.getName());
	Homme1.attack(Homme2.getName());
	Homme1.attack(Homme2.getName());
	Homme1.attack(Homme2.getName());
	Homme1.attack(Homme2.getName());
	Homme1.attack(Homme2.getName());
	Homme1.attack(Homme2.getName());
	Homme1.attack(Homme2.getName());
	Homme2.takeDamage(Homme1.getDMG());
	Homme2.beRepaired(2);
	return 0;
}