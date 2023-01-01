/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 09:38:47 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/27 12:11:13 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavTrap("Hello");

    scavTrap.attack("imad");
    scavTrap.attack("taha");
    scavTrap.attack("sultan");
    scavTrap.attack("dancho");
    scavTrap.attack("zeeks");
    scavTrap.takeDamage(5);
    scavTrap.beRepaired(3);
    scavTrap.takeDamage(8);
    scavTrap.attack("mskerba");
    scavTrap.beRepaired(3);
    scavTrap.takeDamage(8);
    scavTrap.guardGate();
}
