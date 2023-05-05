/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 04:58:18 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/05 06:54:38 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main() {
	ClapTrap Homme1("Bertrand");
	ClapTrap Homme2("Robert");
	colorName(Homme1);
	colorName(Homme2);
	Homme1.attack(Homme2.getName());
	Homme2.takeDamage(Homme1.getAD());
	return 0;
}