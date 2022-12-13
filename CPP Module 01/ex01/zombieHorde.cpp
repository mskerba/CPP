/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:01:56 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/10 10:46:16 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *zombieHorde;
    
    zombieHorde = new Zombie[N];

    while (--N >= 0)
    {
        zombieHorde[N].set_name(name);
        zombieHorde[N].announce();
    }
    return (zombieHorde);
}