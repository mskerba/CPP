/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:48:15 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/13 12:26:11 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::complain(char *level)
{
    std::string allevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = -1;

    while ( ++i < 4)
        if (level == allevel[i])
            break;
            
    switch (i)
    {
        case 0:
            std::cout << "[" << allevel[0] <<"]\n";
            debug();
            std::cout << std::endl;
        case 1:
            std::cout << "[" << allevel[1] <<"]\n";
            info();
            std::cout << std::endl;
        case 2:
            std::cout << "[" << allevel[2] <<"]\n";
            warning();
            std::cout << std::endl;
        case 3:
            std::cout << "[" << allevel[3] <<"]\n";
            error();
            std::cout << std::endl;
            break;
        
        default:
            std::cout << "  [ Probably complaining about insignificant problems ]\n";
    }
}

void    Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do !\n";
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n";
}

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n";
}

void    Harl::error( void )
{
    std::cout << "This is unacceptable ! I want to speak to the manager now.\n";
}
