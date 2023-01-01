/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:06:15 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/31 14:20:30 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat default constructors is called!\n";
}

Cat::Cat(std::string type):Animal(type)
{
    std::cout << "Cat parameterized constructor is called!\n";
}

Cat::Cat(const Cat& obj)
{
    this->type = obj.type;
}

Cat& Cat::operator=(const Cat& other)
{
    this->type = other.type;
    return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Caat" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructors is called!\n";
}