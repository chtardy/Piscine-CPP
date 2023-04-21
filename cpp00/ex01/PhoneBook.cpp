/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:12:58 by ctardy            #+#    #+#             */
/*   Updated: 2023/03/13 18:04:39 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string trunc(std::string sentence)
{
	std::string inter;
	inter = sentence;
	if (sentence.length() > 10)
	{
		inter.clear();
		inter = sentence.substr(0, 9);
		inter = inter + '.';
	}
	return inter;
}

int parsing_catchh(std::string str)
{
	if ((str[0] < 48 || str[0] > 56) || str.length() != 1)
	{
		type_text("🤖 \033[31mVeuillez rentrez un index numérique entre 1 et 8 compris\033[37m", 1);
		return -1;
	}
	return 0;
}

void	PhoneBook::print_contact()
{	
	int loop = 0;
	int i = 0;
	std::string catchh;
	while (loop == 0) {
	if(std::cin.eof())
		end_book(1);
	if (catchh.empty()) {
		std::cout << "|----------|----------|----------|----------|" << std::endl; 
		std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "first_name" << "|" << std::setw(10) << "last_name" << "|" << std::setw(10) << "nickname" << "|" << std::endl; 
		std::cout << "|----------|----------|----------|----------|" << std::endl; 
		while (i < 8) {
			std::cout << "|" << std::setw(10) << i + 1 << "|" << std::setw(10) << trunc(TabContacts[i].get_first_name()) << "|" << std::setw(10) << trunc(TabContacts[i].get_name()) << "|" << std::setw(10) << trunc(TabContacts[i].get_nickname()) << "|" << std::endl; 
			i++;
		}
		std::cout << "|----------|----------|----------|----------|" << std::endl; 
	}
	type_text("Entrez l'index du contact à rechercher : ", 0);
	getline(std::cin, catchh);
	if (parsing_catchh(catchh) < 0)
		continue ;
	loop++;
	}
	i = 0;
	std::cout << "|----------|----------|----------|----------|" << std::endl; 
	std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "first_name" << "|" << std::setw(10) << "last_name" << "|" << std::setw(10) << "nickname" << "|" << std::endl; 
	std::cout << "|----------|----------|----------|----------|" << std::endl; 
	if (catchh.length() == 1)
	{
		int i = catchh[0] - 48;
		if (i <= 8)
			std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << trunc(TabContacts[i - 1].get_first_name()) << "|" << std::setw(10) << trunc(TabContacts[i - 1].get_name()) << "|" << std::setw(10) << trunc(TabContacts[i - 1].get_nickname()) << "|" << std::endl; 
		else if (i > 8)
			type_text("🤓 \033[31mLe tableau ne peut contenir que 8 contacts\033[37m", 1);
	} 
	std::cout << "|----------|----------|----------|----------|" << std::endl; 
}

int PhoneBook::get_index()
{
	return this->i;
}

void PhoneBook::set_index(int flag)
{
	if (flag == 0){
		this->i = 0;
		return ;
	}
	this->i = i + 1;
}

int PhoneBook::send_to_phbk(Contact Oui)
{
	if (this->get_index() == 8)
		this->set_index(0);
	int i = this->get_index();
	this->TabContacts[i] = Oui;
	this->set_index(1);
	return 0;

}
