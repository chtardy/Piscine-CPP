/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:20:10 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/10 14:31:34 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(const Brain &other)
{
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
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