/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:57:54 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/13 09:01:43 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl s;

    if (ac == 2)
        s.complain(av[1]);
    else
        std::cout << "  [ Probably complaining about insignificant problems ]\n";
}
