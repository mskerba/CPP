/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 12:01:14 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/31 17:14:51 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "Dog default constructors is called!\n";
}

Dog::Dog(std::string type):Animal(type)
{
    std::cout << "Dog parameterized constructor is called!\n";
}

Dog::Dog(const Dog& obj)
{
	this->type = obj.type;
}

Dog& Dog::operator=(const Dog& other)
{
    this->type = other.type;
    return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Baark" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructors is called!\n";
}