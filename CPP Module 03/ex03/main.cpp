/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 09:39:01 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/27 17:28:15 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamondTrap("Hello");

    diamondTrap.attack("imad");
    diamondTrap.attack("taha");
    diamondTrap.attack("sultan");
    diamondTrap.attack("dancho");
    diamondTrap.attack("zeeks");
    diamondTrap.takeDamage(5);
    diamondTrap.beRepaired(3);
    diamondTrap.takeDamage(8);
    diamondTrap.attack("mskerba");
    diamondTrap.beRepaired(3);
    diamondTrap.takeDamage(8);
    diamondTrap.highFivesGuys();
    diamondTrap.whoAmI();
}