/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 09:38:53 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/27 13:10:29 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap("Hello");

    fragTrap.attack("imad");
    fragTrap.attack("taha");
    fragTrap.attack("sultan");
    fragTrap.attack("dancho");
    fragTrap.attack("zeeks");
    fragTrap.takeDamage(5);
    fragTrap.beRepaired(3);
    fragTrap.takeDamage(8);
    fragTrap.attack("mskerba");
    fragTrap.beRepaired(3);
    fragTrap.takeDamage(8);
    fragTrap.highFivesGuys();
}