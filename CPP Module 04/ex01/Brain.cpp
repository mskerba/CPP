/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:35:15 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/02 08:33:55 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "brain is create\n";
}

Brain::Brain(const Brain& obj)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
}

Brain& Brain::operator=(const Brain& obj)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

std::string Brain::getIdeas(int i) const
{
	return (this->ideas[i]);
}

void Brain::setIdeas(std::string id, int i)
{
	this->ideas[i % 100] = id;
}


Brain::~Brain()
{
	std::cout << "brain is delete\n";
}