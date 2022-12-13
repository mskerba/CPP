/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:41:21 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/11 10:49:57 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon& weapon;
    public:
        void    attack();
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
};

#endif