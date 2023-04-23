/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:05 by ctardy            #+#    #+#             */
/*   Updated: 2023/03/08 12:02:26 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string StringCaps(std::string str)
{
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (argc == 2)
		{
    		std::cout << StringCaps(argv[1]) << std::endl;
			return 0;
		}
		for (int i = 1; i < argc; i++)
		{
			std::cout << StringCaps(argv[i]);
			if (i == argc - 1)
			{
				std::cout << ' ' << std::endl;
				return 0;
			}	
			std::cout << ' ';
		}
		return 0;
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; 
}
