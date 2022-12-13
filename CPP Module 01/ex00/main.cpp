/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 08:27:35 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/10 09:56:42 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string s = "foo";
    std::string st = "doo";
    Zombie *zomb;
    zomb = newZombie(s);
    randomChump(st);
    delete zomb;
}