/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:00:20 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/23 20:48:14 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
    int     storeFP;
    static const int storeNFB = 8; 
public:
    Fixed();
    Fixed(const int		storeFP);
    Fixed(const float	storeFP);
    Fixed(const Fixed&	obj);
    Fixed& operator=(const Fixed& other);
    float toFloat( void ) const;
    int toInt( void ) const;
    void setRawBits( int const raw );
    int getRawBits( void ) const;
    ~Fixed();
};
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif 