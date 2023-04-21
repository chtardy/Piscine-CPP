/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:33:47 by ctardy            #+#    #+#             */
/*   Updated: 2023/03/13 13:32:41 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main ()
{	
	PhoneBook allo;
	Contact Oui;
	int i = 0;
	std::string catchh;
	while (!std::cin.eof()) {
		type_text("\033[37mEntrez une commande : ", 0);
	//	loop_com();
		std::getline(std::cin, catchh);
		catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
		if(std::cin.eof())
         	end_book(0);
		if (catchh.empty()) {
			error_msg();
			continue ;
		}
		if (catchh == "ADD"){
			Oui.add_function(i);
			allo.send_to_phbk(Oui);
			continue ;
		}
		else if (catchh == "SEARCH")
		{
			allo.print_contact();
			continue ;
		}
		else if (catchh == "EXIT")
			end_book(1);
		type_text("\033[31mLes commandes diponibles sont ADD, SEARCH ou EXIT", 1);
	}
}
