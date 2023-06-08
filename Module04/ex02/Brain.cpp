/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:20:10 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/10 15:06:54 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(const Brain &other) {
	for (int i = 0; i < 100; i++) { 
		ideas[i] = other.ideas[i];
	}
	*this = other;
}

Brain &Brain::operator=(const Brain &other) {
	for (int i = 0; i < 100; i++) 
		ideas[i] = other.ideas[i];
	return (*this);
}

// Constructorz -----------------------------------------

Brain::Brain() {
	type_text("Constructorz Brain by default called", 1);
}

// Brain::Brain(std::string type) {
// 	type_text("Constructorz Brain with type called : ", 0);
// 	type_text(_type, 1);
// }

Brain::~Brain() {
	type_text("Destructorz Brain called", 1);
	// type_text(_type, 1);
}