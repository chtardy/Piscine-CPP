/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:43:56 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/22 19:04:51 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Private fonction

void Harl::debug(void){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info(void){
	std::cout << "[ INFO ]" << std::endl;
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning(void){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

// Public fonction

Harl::Harl(){
	std::cout << "Constructor de Harl" << std::endl;
}

Harl::~Harl(){
	std::cout << "Destructor de Harl" << std::endl;
}

void truk(void){
	std::cout << "Harl as no complain" << std::endl;
}


void Harl::complain(std::string level){
	std::string tab_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int test = 0;
	level == "DEBUG" ? test = 1 :
	level == "INFO" ? test = 2 :
	level == "WARNING" ? test = 3 :
	level == "ERROR" ? test = 4 : 0;
	switch (test)
	{
		case 1:
			debug();
			info();
			warning();
			error();
			break;
		case 2:
			info();
			warning();
			error();
			break;
		case 3:
			warning();
			error();
			break;
		case 4:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}

}




