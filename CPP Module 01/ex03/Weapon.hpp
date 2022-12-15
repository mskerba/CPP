/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:33:59 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/14 11:46:05 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
# include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string& getType();
        void setType(std::string type);
        Weapon(std::string type);
        Weapon();
        ~Weapon();
};


#endif