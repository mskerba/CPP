/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 06:37:45 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/10 10:37:48 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
# include <iostream>


class Zombie
{
    private:
        std::string name;
    public:
        void announce( void );
        void set_name(std::string name);
        Zombie();
        Zombie(std::string nm);
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );


#endif
