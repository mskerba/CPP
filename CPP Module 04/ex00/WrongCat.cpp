/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:17:58 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/31 15:25:47 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : type("WrongCat")
{
	std::cout << "WrongCat default constructors is called!\n";
}
WrongCat::WrongCat(std::string type) : type(type)
{
    std::cout << "WrongCat parameterized constructor is called!\n";
}

WrongCat::WrongCat(const WrongCat& obj): type(obj.type){}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    this->type = other.type;
    return (*this);
}

void WrongCat::makeSound(void) const
{
		std::cout << "WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructors is called!\n";
}