/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:45:01 by ctardy            #+#    #+#             */
/*   Updated: 2023/03/13 13:32:01 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	end_book(int flag)
{
	if (!flag)
		std::cout << std::endl;
	type_text("\033[32mArrêt du programme", 1);
	exit(0);
}

int error_msg(){
	type_text("❗️ \033[31mLa saisie ne peut être vide \033[37m", 1);
	return -1;
}

int check_type(std::string str)
{
	int a = str.compare("ADD");
	if (a == 0)
		return 0;
	a = str.compare("SEARCH");
	if (a == 0)
		return 1;
	a = str.compare("EXIT");
	if (a == 0)
		return 2;
	return -1;
}

int type_text(std::string text, int flag)
{
	int length;
	if (!flag)
	{
		for (int i = 0; i < text.size(); ++i)
		{
			std::cout << text[i] << std::flush;
			usleep(20000);
		}
		return 1;	
	}
	for (int i = 0; i < text.size(); ++i)
	{
		std::cout << text[i] << std::flush;
		usleep(20000);
	}
	std::cout << "\n" << std::flush;
	return 2;
}
void loop_com()
{
	int loop;
	while (loop < 5)
	{
			std::cout << "\b" << std::flush;
			std::cout << "\b" << std::flush;
			std::cout << " " << std::flush;
			std::cout << "\033[1C" << std::flush;
			usleep(150000);
			std::cout << "\b" << std::flush;
			std::cout << "\b" << std::flush;
			std::cout << ':' << std::flush;
			std::cout << "\033[1C" << std::flush;
			usleep(150000);
			loop++;
	}
}