/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:00:13 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/26 11:12:55 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():storeFP(0){}

Fixed::Fixed(const int storeFP):storeFP(storeFP << storeNFB){}

Fixed::Fixed(const float storeFP)
{
    this->storeFP = roundf(storeFP * (1 << storeNFB));
}

Fixed::Fixed(const Fixed& obj)
{
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
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

void    Fixed::setRawBits( int const raw )
{
    this->storeFP = raw;   
}

int Fixed::getRawBits( void ) const
{
    return (this->storeFP);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out); 
}

bool operator==(const Fixed& f1, const Fixed& f2)
{
    return (f1.getRawBits() == f2.getRawBits());    
}

bool operator!=(const Fixed& f1, const Fixed& f2)
{
    return (f1.getRawBits() != f2.getRawBits());    
}

bool operator>(const Fixed& f1, const Fixed& f2)
{
    return (f1.getRawBits() > f2.getRawBits());    
}

bool operator<(const Fixed& f1, const Fixed& f2)
{
    return (f1.getRawBits() < f2.getRawBits());    
}

bool operator>=(const Fixed& f1, const Fixed& f2)
{
    return (f1.getRawBits() >= f2.getRawBits());    
}

bool operator<=(const Fixed& f1, const Fixed& f2)
{
    return (f1.getRawBits() <= f2.getRawBits());    
}

Fixed Fixed::operator+(const Fixed& f)
{
    int intstore = this->getRawBits() + f.getRawBits();
    Fixed newstore((float)intstore / (1 << 8));
    return (newstore);
}

Fixed Fixed::operator-(const Fixed& f)
{
    int intstore = this->getRawBits() - f.getRawBits();
    Fixed newstore((float)intstore / (1 << 8));
    return (newstore);
}

Fixed Fixed::operator*(const Fixed& f)
{
    int intstore = this->getRawBits() * f.getRawBits();
    Fixed newstore;
    newstore.setRawBits(intstore / (1 << 8));
    return (newstore);
}

Fixed Fixed::operator/(const Fixed& f)
{
    Fixed newstore;
    newstore.setRawBits((this->getRawBits() << 8)  / f.getRawBits());
    return (newstore);
}

Fixed&	Fixed::operator++()
{
    ++storeFP;
    return (*this);
}

Fixed&	Fixed::operator--()
{
    --storeFP;
    return (*this);
}

Fixed	Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++storeFP;
    return (tmp);
}

Fixed	Fixed::operator--(int)
{
    Fixed tmp(*this);
    --storeFP;
    return (tmp);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (b);
    return (a);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (b);
    return (a);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (b);
    return (a);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (b);
    return (a);
}

Fixed::~Fixed(){}
