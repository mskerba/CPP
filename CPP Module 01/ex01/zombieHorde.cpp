/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:01:56 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/15 17:29:44 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *zombieHorde;
    
    if (N <= 0)
    {
        std::cerr << "      ***The input is invalid***\n";
        exit(0);
    }
    zombieHorde = new Zombie[N];
    if (!zombieHorde)
    {
        std::cerr << "Could not allocate memory\n"; 
        exit(0);
    }
    while (--N >= 0)
    {
        zombieHorde[N].set_name(name);
        zombieHorde[N].announce();
    }
    return (zombieHorde);
}