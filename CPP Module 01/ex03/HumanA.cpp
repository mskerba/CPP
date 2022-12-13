/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:43:11 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/11 10:49:43 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):name(name),weapon(weapon){}

HumanA::~HumanA(){}

void    HumanA::attack()
{
    std::cout << name;
    std::cout << " attacks with their ";
    std::cout << weapon.getType();
    std::cout << std::endl;
}
