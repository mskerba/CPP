/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 10:15:18 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/26 12:11:31 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int   area(const Point& a, const Point& b, const Point& c)
{
    int   x(a.getrawx() * (b.getrawy() - c.getrawy()));
    int   y(b.getrawx() * (c.getrawy() - a.getrawy()));
    int   z(c.getrawx() * (a.getrawy() - b.getrawy()));
    x = (x + y + z);
    return (abs(x >> 1));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    int At = area(a, b, c);
    int A1 = area(a, b, point);
    int A2 = area(a, c, point);
    int A3 = area(b, c, point);
    int s = (A1 + A2 + A3);
    

    std::cout << At <<" "<< A1 <<" "<< A2 <<" "<< A3 <<" " <<s<<std::endl;
    if (A1 == 0 || A2 == 0 || A3 == 0)
        return (false);
    return (At == A1 + A2 + A3);
}