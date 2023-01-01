/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:18:01 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/31 15:18:56 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructors is called!\n";
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "WrongAnimal parameterized constructor is called!\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj): type(obj.type){}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    this->type = other.type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructors is called!\n";
}