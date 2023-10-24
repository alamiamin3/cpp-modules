/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:34:54 by aalami            #+#    #+#             */
/*   Updated: 2023/10/24 17:45:29 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

void a()
{
    
    system("leaks materia");
}
int main()
{
    atexit(a);
    // AMateria *unequip;
    IMateriaSource* src = new MateriaSource();
    AMateria *p = new Ice();
    AMateria *d = new Ice();
    AMateria *d = new Ice();
    src->learnMateria(p);
    src->learnMateria(d);
    src->learnMateria(d);
    src->learnMateria(d);
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    // AMateria *s1 = tmp;
    me->equip(tmp);
    tmp = src->createMateria("ice");
    // AMateria *s2 = tmp;
    me->equip(tmp);
    tmp = src->createMateria("ice");
    // AMateria *s3 = tmp;
    me->equip(tmp);
    tmp = src->createMateria("ice");
    // AMateria *s4 = tmp;
    me->equip(tmp);
    me->unequip(3);
    me->unequip(2);
    me->unequip(1);
    // me->unequip(0);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    delete bob;
    delete me;
    // delete s1;
    // delete s2;
    // delete s3;
    // delete s4;
    delete src;
    delete p;
    delete d;
    return 0;
}