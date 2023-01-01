/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:46:19 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/29 13:28:13 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string Name);
    ScavTrap(const ScavTrap& obj);
    ScavTrap&   operator=(const ScavTrap& other);
    void        attack(const std::string& target);
    void        guardGate();
	int			getEnergy() const;
    ~ScavTrap();
};

#endif
