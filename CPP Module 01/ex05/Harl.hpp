/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:46:44 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/13 07:49:34 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef Harl_HPP
# define Harl_HPP
# include <iostream>

class Harl
{
private:
    void    debug();
    void    info( void );
    void    warning( void );
    void    error( void );
public:
    Harl();
    ~Harl();
    void    complain(std::string level);
};

#endif