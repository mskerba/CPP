/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:00:20 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/25 16:15:49 by mskerba          ###   ########.fr       */
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
    Fixed&	operator=(const Fixed& other);
    float	toFloat( void ) const;
    int		toInt( void ) const;
    void	setRawBits( int const raw );
    int		getRawBits( void ) const;
    Fixed	operator+(const Fixed& f);
    Fixed	operator-(const Fixed& f);
    Fixed	operator*(const Fixed& f);
    Fixed	operator/(const Fixed& f);
    Fixed&	operator++();
    Fixed&	operator--();
    Fixed	operator++(int);
    Fixed	operator--(int);
    static  const Fixed& min(const Fixed& a, const Fixed& b);
    static  const Fixed& max(const Fixed& a, const Fixed& b);
    static  Fixed& min(Fixed& a, Fixed& b);
    static  Fixed& max(Fixed& a, Fixed& b);
    ~Fixed();
};
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
bool operator>(const Fixed& f1, const Fixed& f2);
bool operator<(const Fixed& f1, const Fixed& f2);
bool operator>=(const Fixed& f1, const Fixed& f2);
bool operator<=(const Fixed& f1, const Fixed& f2);
bool operator==(const Fixed& f1, const Fixed& f2);
bool operator!=(const Fixed& f1, const Fixed& f2);

#endif
