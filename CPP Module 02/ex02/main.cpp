/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:02:46 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/27 18:20:12 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed b( Fixed( 5.05f ) + Fixed( 2 ) );
    Fixed c( Fixed( 5.05f ) - Fixed( 2 ) );
    Fixed d( Fixed( 5.05f ) * Fixed( 2 )* Fixed( 2 ) );
    Fixed e( Fixed( 5.05f ) / Fixed( 2 ) );
    Fixed j( e + d - c * a / b);
    std::cout <<"-->  " << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout<< "--> (+) " << b << std::endl;
    std::cout<< "--> (-) " << c << std::endl;
    std::cout<< "--> (*) " << d << std::endl;
    std::cout<< "--> (/) " << e << std::endl;
    std::cout<< "--> (chinning) " << j << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}
