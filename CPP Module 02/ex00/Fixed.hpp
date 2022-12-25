/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:00:20 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/25 12:17:34 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
    int     storeFP;
    static const int storeNFB = 8; 
public:
    Fixed();
    Fixed(const Fixed& obj);
    Fixed& operator=(const Fixed& other);
    void setRawBits( int const raw );
    int getRawBits( void ) const;
    ~Fixed();
};


#endif 