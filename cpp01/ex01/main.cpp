/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:05:33 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/23 20:11:52 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int i = 4;
	Zombie *horde = zombieHorde(i, "hello");
	for (int j = 0; j < i; j++){
		horde[j].announce();
	}
	delete [] horde;
}
