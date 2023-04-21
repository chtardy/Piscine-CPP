/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:29:21 by ctardy            #+#    #+#             */
/*   Updated: 2023/03/12 16:24:44 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int Contact::add_function(int i)
{
	std::string catchh ;
	int error;
	while (i < 5) {
		if (i == 0) {
			type_text("\033[37mEntrez le prénom du contact : ", 0); // FIRST_NAME
			std::getline(std::cin,catchh);
     		if(std::cin.eof())
         		end_book(0);
			catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
			error = this->set_first_name(catchh);
			if (error < 0)
				continue ;
			i++;
		} 
		//
			if (i == 1) {
			type_text("Entrez le nom du contact : ", 0); // NAME
			std::getline(std::cin,catchh);
			if(std::cin.eof())
         		end_book(0);
			catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
			error = this->set_name(catchh);
			if (error < 0)
				continue ;
			i++;
		}
		//
		if (i == 2) {
			type_text("Entrez le surnom du contact : ", 0); // NICKNAME
			std::getline(std::cin,catchh);
			if(std::cin.eof())
         		end_book(0);
			catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
			error = this->set_nickname(catchh);
			if (error < 0)
				continue ;
			i++;
		}
		//
		if (i == 3) {
			type_text("Entrez le numero telephonique : ", 0); // NUMBER
			std::getline(std::cin,catchh);
			if(std::cin.eof())
         		end_book(0);
			catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
			error = this->set_number(catchh);
			if (error < 0)
				continue ;
			i++;
		}
	//
		if (i == 4) {
			type_text("Et pour finir son plus lourd secret : ", 0); // SECRET
			std::getline(std::cin,catchh);
			if(std::cin.eof())
         		end_book(0);
			error = this->set_secret(catchh);
			if (error < 0)
				continue ;
			i++;
		}
	}
	std::string contact = get_first_name();
	type_text(contact, 0);
	contact = get_name();
	type_text(" ", 0);
	type_text(contact, 0);
	type_text("\033[32m : enregistré !\033[37m", 1);
	return 0;
}
