/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:32:06 by ctardy            #+#    #+#             */
/*   Updated: 2023/06/08 14:46:24 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void type_text(std::string text, int flag) {
	if (!flag)
	{
		for (unsigned int i = 0; i < text.size(); ++i) {
			std::cout << text[i] << std::flush;
			usleep(15000);
		}
		return;
	}
	for (unsigned int i = 0; i < text.size(); ++i)
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