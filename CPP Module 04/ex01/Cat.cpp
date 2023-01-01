/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:06:15 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/01 18:00:42 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	brain = new Brain;
	std::cout << "Cat default constructors is called!\n";
}

Cat::Cat(std::string type):Animal(type)
{
    std::cout << "Cat parameterized constructor is called!\n";
}

Cat::Cat(const Cat& obj)
{
	*this = obj;
}

Cat& Cat::operator=(const Cat& other)
{
	this->brain = new Brain;
	*this->brain = *other.brain;
    this->type = other.type;
    return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Caat" << std::endl;
}

std::string Cat::getBrain(int i) const
{
	return (this->brain->getIdeas(i));
}

void Cat::setBrain(std::string id, int i)
{
	this->brain->setIdeas(id, i);
}

Cat::~Cat()
{
	std::cout << "Cat destructors is called!\n";
	delete this->brain;
}