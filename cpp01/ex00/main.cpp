/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:18:03 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/01 11:49:14 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie truc("Starter");
	Zombie *zombieCreation = truc.newZombie("First Zombie");
	truc.randomChump("Second Zombie");
	delete zombieCreation;
}

