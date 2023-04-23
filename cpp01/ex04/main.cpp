/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:01:46 by ctardy            #+#    #+#             */
/*   Updated: 2023/04/23 20:30:35 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#include <sys/stat.h>
#include <cstring>
#include <fstream>

bool is_regular_file(const char* path) {
    struct stat path_stat;
    if (stat(path, &path_stat) != 0) {
        return false;
    }
    return S_ISREG(path_stat.st_mode);
}

std::string envoielepate(std::string &ligne, std::string wordtochange, std::string wordreplace, int i){
	std::string replacedligne;
	std::string startligne = ligne.substr(0, i);
	std::string endligne = ligne.substr((i + wordtochange.size()), ligne.size());
	replacedligne = startligne + wordreplace;
	int oldi = i + wordreplace.size();
	i = endligne.find(wordtochange);
	while (i >= 0){
		startligne = replacedligne + endligne.substr(0, i);
		replacedligne = startligne + wordreplace;
		endligne = endligne.substr((i + wordtochange.size()), ligne.size());
		oldi = i + wordreplace.size();
		i = endligne.find(wordtochange);
	}
	replacedligne = replacedligne + endligne;
	return replacedligne;
}

int main(int argc, char **argv) {
	if (argc != 4){
		std::cout << "les arg sont pas BONS la" << std::endl;
		return -1;
	}
    if (!is_regular_file(argv[1])) {
		std::cout << "Error sur le fichier" << std::endl;
        return -1;
    }
	
	std::ifstream fichier(argv[1]);
	std::string wordtochange(argv[2]);
	std::string wordreplace(argv[3]);
    std::ofstream writefile("fichier.replace");
	std::string ligne;

	if (!argv[2][0]){
		std::cout << "La string a remplacé est vide, veuillew choisir un argv :" << std::endl;
		std::string catchh;
		getline(std::cin, catchh);
		wordtochange = catchh;
	}

	if (fichier.fail())
	{
		std::cout << "Tu m'as enlevé les droits ou quoi la ?" << std::endl;
		return (-1);
	}

	if(fichier){
		std::cout << "\nContenu du fichier avant modification :" << std::endl;
		std::cout << " ------------------ "  << std::endl;
		while(std::getline(fichier, ligne)){
           	std::cout << ligne << std::endl;
			int i = ligne.find(wordtochange);
			if (i >= 0)
				ligne = envoielepate(ligne, wordtochange, wordreplace, i);
			writefile << ligne;
			if (!fichier.eof()) {
                writefile << std::endl;
            }
    	}
		std::cout << " ------------------ " << std::endl;
    }
	fichier.close();
	writefile.close();
	std::ifstream readfile("fichier.replace");
	std::cout << "\nContenu du fichier après modification :" << std::endl;
	std::cout << " ------------------ "  << std::endl;
	while (std::getline(readfile, ligne)){
		std::cout << ligne << std::endl;
	}
	std::cout << " ------------------ " << std::endl;
	readfile.close();
    return 0;
}

