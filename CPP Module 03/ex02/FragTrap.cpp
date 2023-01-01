/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:57:17 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/29 13:19:18 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructors is called!\n";
} 

FragTrap::FragTrap(std::string Name):ClapTrap(Name)
{
    std::cout << "FragTrap parameterized constructor is called!\n";
}

FragTrap::FragTrap(const FragTrap& obj){
    this->Name = obj.Name;
    this->Hit = obj.Hit;
    this->Energy = obj.Energy;
    this->attackDamage = obj.attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    this->Name = other.Name;
    this->Hit = other.Hit;
    this->Energy = other.Energy;
    this->attackDamage = other.attackDamage;
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    if(Hit && Energy)
    {   
        std::cout << "FragTrap " << Name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
        this->Energy--;
    }
    else
        std::cout << "       ***"<< Name <<" can’t do anything***\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Positive high fives\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructors is called!\n";
}