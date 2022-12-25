/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:00:13 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/25 12:18:25 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():storeFP(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called\n";
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj) {
    std::cout << "Copy assignment operator called\n";
    this->setRawBits(obj.getRawBits());
    return (*this);
}

void    Fixed::setRawBits( int const raw )
{
    this->storeFP = raw;   
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return (this->storeFP);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}
