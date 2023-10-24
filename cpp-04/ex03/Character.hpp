/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:48:54 by aalami            #+#    #+#             */
/*   Updated: 2023/10/24 17:31:46 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
class Character : public ICharacter
{
    private:
        AMateria *slot[4];
        // AMateria **save;
        // int save_index;
        std::string name;
    public:
    Character();
    Character(const Character& obj);
    Character(const std::string& name);
    Character &operator=(const Character& obj);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    
};
#endif
