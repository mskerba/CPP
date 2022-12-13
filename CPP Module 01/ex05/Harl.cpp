/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:48:15 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/13 08:46:57 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::complain(std::string level)
{
    void (Harl::*ptrFun[])() = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
    std::string allevel[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
    int i = -1;

    while ( ++i < 4)
        if (level == allevel[i])
            break;
    if (i < 4)
        (this->*ptrFun[i])();
    else
        std::cout << "  ***this level is invalid***\n";
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
