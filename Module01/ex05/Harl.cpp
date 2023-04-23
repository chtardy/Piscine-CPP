/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:43:56 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/23 21:00:37 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Private fonction

void Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info(void){
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
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
	std::string tab_level[4]= {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptr_functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;
    while (i < 4 && level != tab_level[i]) {
        i++;
    }
    if (i < 4) {
        (this->*ptr_functions[i])();
    } else {
        std::cout << "Harl has no complain" << std::endl;
    }
}

