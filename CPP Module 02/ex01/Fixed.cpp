/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:00:13 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/25 15:58:19 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():storeFP(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int storeFP):storeFP(storeFP << storeNFB)
{
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float storeFP)
{
    this->storeFP = roundf(storeFP * (1 << storeNFB));
    std::cout << "Float constructor called\n";
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

float Fixed::toFloat( void ) const
{
    float toFloat = (float)this->storeFP / (1 << this->storeNFB);
    return (toFloat);
}

int Fixed::toInt( void ) const
{
    return (this->storeFP >> this->storeNFB);   
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out); 
}

void    Fixed::setRawBits( int const raw )
{
    this->storeFP = raw;   
}

int Fixed::getRawBits( void ) const
{
    return (this->storeFP);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}
