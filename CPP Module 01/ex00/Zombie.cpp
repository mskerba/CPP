/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 06:39:06 by mskerba           #+#    #+#             */
/*   Updated: 2022/11/20 07:38:02 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie(){}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...";
}

