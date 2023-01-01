/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 10:15:18 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/27 18:23:30 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed   area(const Point& a, const Point& b, const Point& c)
{
    Fixed   x(a.getx() * (b.gety() - c.gety()));
    Fixed   y(b.getx() * (c.gety() - a.gety()));
    Fixed   z(c.getx() * (a.gety() - b.gety()));
    x = (x + y + z);
    return (abs(x.getRawBits()) >> 1);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed At = area(a, b, c);
    Fixed A1 = area(a, b, point);
    Fixed A2 = area(a, c, point);
    Fixed A3 = area(b, c, point);

    if (A1 == Fixed(0) || A2 == Fixed(0) || A3 == Fixed(0))
        return (false);
    return (At == A1 + A2 + A3);
}