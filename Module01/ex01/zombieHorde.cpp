/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:53:45 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/23 20:07:38 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
{
	Zombie *new_one;
	new_one = new Zombie(name);
	return new_one;
}

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for(int i = 0; i < N; i++){
		horde[i].set_name(name);
		horde[i].index = i;
	}
	return horde;
}
