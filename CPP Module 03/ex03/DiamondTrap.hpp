/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:26:49 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/29 13:20:21 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
private:
    std::string Name;
public:
    DiamondTrap();
    DiamondTrap(std::string Name);
    DiamondTrap(const DiamondTrap& obj);
    DiamondTrap&   operator=(const DiamondTrap& other);
    void        attack(const std::string& target);
    void whoAmI();
    ~DiamondTrap();
};


    // ScavTrap::attack();

#endif