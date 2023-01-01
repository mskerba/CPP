/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:02:46 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/27 18:18:11 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
    Point a(4,6);   
    Point b(2,4);   
    Point c(5,4);   
    // Point point(-4.422,6.096);
    Point point(3,5);
    if (bsp(a, b, c, point))
        std::cout << "the point is inside the triangle\n";
    else
        std::cout << "the point is out the triangle\n";
    return 0;
}