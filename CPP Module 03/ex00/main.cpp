/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 09:38:40 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/27 12:09:56 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Hello");

    claptrap.attack("imad");
    claptrap.attack("taha");
    claptrap.attack("sultan");
    claptrap.attack("dancho");
    claptrap.attack("zeeks");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.takeDamage(8);
    claptrap.attack("mskerba");
    claptrap.beRepaired(3);
    claptrap.takeDamage(8);
}
