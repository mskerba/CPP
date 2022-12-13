/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:42:04 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/11 11:28:02 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string name):name(name){}

HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void    HumanB::attack()
{
	std::cout << name;
	std::cout << " attacks with their ";
	std::cout << weapon->getType();
	std::cout << std::endl;
}
