/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 08:15:12 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/15 10:29:15 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name)
{
    Zombie *newZombie;

    newZombie = new Zombie(name);
    if (!newZombie)
    {
        std::cerr << "Could not allocate memory\n";
        exit(0);
    }
    return (newZombie);
}
