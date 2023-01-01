/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 09:45:18 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/27 14:45:48 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Hit(10) , Energy(10) , attackDamage(0)
{
    std::cout << "ClapTrap default constructors is called!\n";
} 

ClapTrap::ClapTrap(std::string Name) : Name(Name), Hit(10), Energy(10), attackDamage(0)
{
    std::cout << "ClapTrap parameterized constructor is called!\n";
}

ClapTrap::ClapTrap(const ClapTrap& obj): Name(obj.Name), Hit(obj.Hit), Energy(obj.Energy), attackDamage(obj.attackDamage){}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    this->Name = other.Name;
    this->Hit = other.Hit;
    this->Energy = other.Energy;
    this->attackDamage = other.attackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if(Hit && Energy)
    {   
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
        this->Energy--;
    }
    else
        std::cout << "       ***ClapTrap can’t do anything***\n";
        
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(Hit && Energy)
        this->Hit -= amount;
    else
        std::cout << "       ***ClapTrap can’t do anything***\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(Hit && Energy)
    {   
        this->Hit += amount;
        this->Energy--;
    }
    else
        std::cout << "       ***ClapTrap can’t do anything***\n";
        
}


ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructors is called!\n";
}