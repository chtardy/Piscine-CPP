/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:19:56 by ctardy            #+#    #+#             */
/*   Updated: 2023/06/04 11:57:19 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) { 
		_msource[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	for (int i = 0; i < 4; i++) { 
		AMateria const *inter = other.getMateria(i);
		if (_msource[i] != NULL)
			_msource[i] = inter->clone();
		else
			_msource[i] = NULL;
	}	
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        this->~MateriaSource();
        for (int i = 0; i < 4; ++i)
        {
            AMateria const *inter = other.getMateria(i);
            if (inter != NULL)
                    this->_msource[i] = inter->clone();
            else
                    this->_msource[i] = NULL;
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (_msource[i] != NULL)
			delete _msource[i];
	}
}

AMateria *MateriaSource::getMateria(int index) const {
	return _msource[index];
}

void MateriaSource::learnMateria(AMateria *materiaGiven) {
	for (int i = 0; i < 4; i++) {
		if (_msource[i] == NULL) {
			_msource[i] = materiaGiven; 
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) { 
		if (_msource[i] != NULL && _msource[i]->getType() == type)
			return (_msource[i]->clone());
	}
return (NULL);
}
