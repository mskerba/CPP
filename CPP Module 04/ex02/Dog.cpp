/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 12:01:14 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/01 18:14:24 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->brain = new Brain;
	std::cout << "Dog default constructors is called!\n";
}
Dog::Dog(std::string type)
{
	this->type = type;
    std::cout << "Dog parameterized constructor is called!\n";
}
Dog::Dog(const Dog& obj)
{
	*this = obj;
}
Dog& Dog::operator=(const Dog& other)
{
    this->type = other.type;
	this->brain = new Brain;
	*this->brain = *other.brain;
    return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Baark" << std::endl;
}

void Dog::setBrain(std::string id, int i)
{
	this->brain->setIdeas(id, i);
}

std::string Dog::getBrain(int i) const
{
	return (this->brain->getIdeas(i));
}

Dog::~Dog()
{
	std::cout << "Dog destructors is called!\n";
	delete this->brain;
}