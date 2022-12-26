/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 09:58:06 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/26 12:00:16 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    Point(float x, float y);
    Point(const Point& obj);
    Point&	operator=(const Point& other);
    Fixed   getx( void ) const;
    Fixed   gety( void ) const;
    int   getrawx( void ) const;
    int   getrawy( void ) const;
    ~Point();
};
int   area(const Point& a, const Point& b, const Point& c);
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif