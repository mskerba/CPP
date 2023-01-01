/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:47:18 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/29 13:28:05 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->Hit = 100;
    this->Energy = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap default constructors is called!\n";
} 

ScavTrap::ScavTrap(std::string Name) :ClapTrap(Name)
{
    this->Hit = 100;
    this->Energy = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap parameterized constructor is called!\n";
}

ScavTrap::ScavTrap(const ScavTrap& obj){
    this->Name = obj.Name;
    this->Hit = obj.Hit;
    this->Energy = obj.Energy;
    this->attackDamage = obj.attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    this->Name = other.Name;
    this->Hit = other.Hit;
    this->Energy = other.Energy;
    this->attackDamage = other.attackDamage;
    return (*this);
}

int	ScavTrap::getEnergy() const
{
	return (this->Energy);
}

void ScavTrap::attack(const std::string& target)
{
    if(Hit && Energy)
    {   
        std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
        this->Energy--;
    }
    else
        std::cout << "       ***"<< Name <<" can’t do anything***\n";
}   

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructors is called!\n";
}
