/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:34:52 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/11 10:18:40 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}
Weapon::Weapon(std::string type):type(type){}

Weapon::~Weapon(){}

std::string& Weapon::getType()
{
    return (type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
