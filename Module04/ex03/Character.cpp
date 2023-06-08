/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:48:04 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/20 16:17:49 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

	// Character::Character() {
	// 	// std::cout << "Constructorz de Character by default" << std::endl;
	// }
	
	Character::Character(const std::string name) {
		// std::cout << "Constructorz de Character by default" << std::endl;
		_name = name;
		for (int i = 0; i < 4; i++) {
			_materias[i] = NULL;
			// std::cout << "init " << i << std::endl;
		}
	}

	Character::Character(const Character &other) {
		// a fill
		(void)other;
	}
	
	Character &Character::operator=(const Character &other)
	{
		(void)other;
		return(*this);
		// a fill
	}

	Character::~Character() {
		// std::cout << "Destructorz de Character" << std::endl;
		for (int i = 0; i < 4; i++) {
			if (_materias[i] != NULL)
				delete _materias[i];
		}
	}
	
	std::string const &Character::getName() const {
		return _name;	
	}

	void Character::equip(AMateria *m) {
		for (int i = 0; i < 4; i++) {
			if (_materias[i] == NULL) {
				_materias[i] = m;
				std::cout << "J'ai equipe a " << i << std::endl;
				return ;				
			}
		}
	}

	void Character::unequip(int idx) {
			if (idx < 0 || idx >= 4) {
				std::cout << "Bad index" << std::endl;
				return ;
			}
			_materias[idx] = NULL;
		}		

		void Character::use(int idx, ICharacter &target) {
			if (idx < 0 || idx >= 4) {
				std::cout << "Bad index" << std::endl;
				return ;
			}
			if (_materias[idx] != NULL)
				_materias[idx]->use(target);
		}
















	