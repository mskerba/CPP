/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:26:51 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/29 13:28:27 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	ScavTrap	obj;	
    this->Hit = FragTrap::Hit;
    this->Energy = obj.getEnergy();
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap default constructors is called!\n";
} 

DiamondTrap::DiamondTrap(std::string Name)
{
    this->Name = Name;
    ClapTrap::Name = Name + "_clap_name";
    this->Hit = FragTrap::Hit;
    this->Energy = ScavTrap::Energy;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap parameterized constructor is called!\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj){
    this->Name = obj.Name;
    this->Hit = obj.Hit;
    this->Energy = obj.Energy;
    this->attackDamage = obj.attackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    this->Name = other.Name;
    this->Hit = other.Hit;
    this->Energy = other.Energy;
    this->attackDamage = other.attackDamage;
    return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
    if(Hit && Energy)
    {   
        std::cout << "DiamondTrap " << Name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
        this->Energy--;
    }
    else
        std::cout << "       ***"<< Name <<" can’t do anything***\n";
}   

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap Name is : " << this->Name << ". ClapTrap Name is : " << ClapTrap::Name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructors is called!\n";
}
