/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:21:58 by ctardy            #+#    #+#             */
/*   Updated: 2023/06/04 11:47:35 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void)
{
    IMateriaSource    *src = new MateriaSource;
    src->learnMateria(new Ice);
    src->learnMateria(new Cure);
    ICharacter    *me = new Character("me");
    AMateria    *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter    *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "---equip unexisting Materia---" << std::endl;

    tmp = src->createMateria("fire");
    me->equip(tmp);
    me->use(2, *bob);

    std::cout << "---clear inventory---" << std::endl;
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
    me->unequip(3);
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);

    std::cout << "---add to full inventory---" << std::endl;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    std::cout << "---use unexisting Materia---" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);

    std::cout << "---unequip unexisting Materia---" << std::endl;
    me->unequip(42);

    delete tmp;
    delete bob;
    delete me;
    delete src;
    // system("leaks materia");
    return (0);
}