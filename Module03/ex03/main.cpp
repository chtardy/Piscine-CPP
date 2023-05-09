/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 04:58:18 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/09 11:44:12 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

void getInfo(std::ostringstream &oss, FragTrap &daughter, int stat, int flag) {
	
	switch(flag) {
		case 1 :
			oss << "\033[32;1mHP : \033[37;1m" << stat << "\033[0m";
			break;
		case 2 :
			oss << "\033[34;1mEP : \033[37;1m" << stat <<"\033[0m";
			break;
		case 3 :
			oss << "\033[0;31;1mAD : \033[37;1m" << stat << "\033[0m";
			break;
	}
	type_text(oss.str(), 1);
	oss.str("");
}

int main() {
	FragTrap Frag("Fraggy");
	ScavTrap Scav("Scavy");
	DiamondTrap Diamond("Daddy");
	
	std::cout << "Frag HP : "<< Frag.getHP() << std::endl;
	std::cout << "Frag EP : "<< Frag.getEP() << std::endl;
	std::cout << "Frag AD : "<< Frag.getAD() << std::endl;

	std::cout << "Scav HP : "<< Scav.getHP() << std::endl;
	std::cout << "Scav EP : "<< Scav.getEP() << std::endl;
	std::cout << "Scav AD : "<< Scav.getAD() << std::endl;
	
	std::cout << "Diamond HP : "<< Diamond.getDHP() << std::endl;
	std::cout << "Diamond EP : "<< Diamond.getDEP() << std::endl;
	std::cout << "Diamond AD : "<< Diamond.getDAD() << std::endl;

	Diamond.whoAmI();
	
}