/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:02:00 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/09 10:00:53 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animale default constructors is called!\n";
}
Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal parameterized constructor is called!\n";
}

Animal::Animal(const Animal& obj): type(obj.type){}

Animal& Animal::operator=(const Animal& other)
{
    this->type = other.type;
    return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}


Animal::~Animal()
{
	std::cout << "Animale destructors is called!\n";
}