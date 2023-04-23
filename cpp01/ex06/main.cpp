/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:52:57 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/22 19:06:35 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){
	std::string catchh;
	Harl test;
	if (argc == 1){
		std::cout << "\033[31mIl me faut un flag svp\033[37m" << std::endl;
		getline(std::cin, catchh);
		test.complain(catchh);
		return 0;
	}
	if (argc > 2){
		std::cout << "Un seul argument svp" << std::endl;
		exit(0);
	}
	test.complain(argv[1]);

	// $> ./HarlFilter "WARNING"
	// [ WARNING ]
	// I think I deserve to have some extra bacon for free.
	// I've been coming for years whereas you started working here since last month.
	// [ ERROR ]
	// This is unacceptable, I want to speak to the manager now.
	// $> ./HarlFilter "I am not sure how tired I am today..."
	// [ Probably complaining about insignificant problems ]
}