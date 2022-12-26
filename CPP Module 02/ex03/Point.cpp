/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 09:59:45 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/26 11:55:41 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0),y(0){}

Point::Point(float x, float y) : x(x), y(y){}

Point::Point(const Point& obj):x(obj.x) , y(obj.y){}

Point& Point::operator=(const Point& obj)
{
    (void)obj;
    return (*this);
}

Fixed   Point::getx( void ) const
{
    return (this->x);
}

Fixed   Point::gety( void ) const
{
    return (this->y);
}

int   Point::getrawx( void ) const
{
    return (this->x.getRawBits());
}

int   Point::getrawy( void ) const
{
    return (this->y.getRawBits());
}


Point::~Point(){}
