/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:02:00 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/02 08:37:26 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal& Animal::operator=(const Animal& other)
{
    this->type = other.type;
    return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

Animal::~Animal(){}