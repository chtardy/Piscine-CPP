/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_and_set.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:39:48 by ctardy            #+#    #+#             */
/*   Updated: 2023/03/09 17:57:05 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// get_functions ------------------------------------

std::string Contact::get_first_name()
{
	return this->first_name;
}

std::string Contact::get_name()
{
	return this->name;
}

std::string Contact::get_nickname()
{
	return this->nickname;
}

std::string Contact::get_number()
{
	return this->number;
}

std::string Contact::get_secret()
{
	return this->secret;
}

// set_functions ------------------------------------


int Contact::set_first_name(std::string name)
{	
	if (name.empty())
		return error_msg();
	this->first_name = name;
	return 0; 
}

int Contact::set_name(std::string name)
{
	if (name.empty())
		return error_msg();
	this->name = name;
	return 0; 
}

int Contact::set_nickname(std::string name)
{
	if (name.empty())
		return error_msg();
	this->nickname = name;
	return 0; 
}

int Contact::set_number(std::string name)
{
	if (name.empty())
		return error_msg();
	for (int i = 0; i < name.length() ; i++) {
		if (!isdigit(name[i]))
		{
			type_text("🔢 \033[31mVeuillez rentrer 10 caractères numériques\033[37m", 1);
			return -1;
		}
	}
	if (name.length() < 10) {
		type_text("🔢 \033[31mVotre numéro doit comporter 10 chiffres\033[37m", 1);
		return -1;
	}
	this->number = name;
	return 0; 
}

int Contact::set_secret(std::string name)
{
	if (name.empty())
		return error_msg();
	this->secret = name;
	int a = (name.compare("Le correcteur sens tres bon"));
	if (a == 0)
	{
		type_text("\033[38;5;208mCe n'est pas vraiment un secret ça ... 😳\033[37m", 1);
	}
	return 0; 
}