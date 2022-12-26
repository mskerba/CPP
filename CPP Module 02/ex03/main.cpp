/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:02:46 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/26 12:15:47 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
    Point a(-3,-3);   
    Point b(-3,-1);   
    Point c(-1,-2);   
    // Point point(-4.422,6.096);
    Point point(-2,-2);
    if (bsp(a, b, c, point))
        std::cout << "the point is inside the triangle\n";
    else
        std::cout << "the point is out the triangle\n";
    return 0;
}