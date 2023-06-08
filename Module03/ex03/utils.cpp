/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 05:04:55 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/05 06:16:30 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void type_text(std::string text, int flag) {
	if (!flag)
	{
		for (int i = 0; i < text.size(); ++i) {
			std::cout << text[i] << std::flush;
			usleep(15000);
		}
		return;	
	}
	for (int i = 0; i < text.size(); ++i)
	{
		std::cout << text[i] << std::flush;
		usleep(17000);
	}
	std::cout << "\n" << std::flush;
	return;
}

int numDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}


// void type_int(int num) {
// 	while (num)

// 	for (int i = 0; i < numDigits(num); ++i) {
// 		std::cout << num[i] << std::flush;
// 		usleep(20000);
// 	} 	
// }
