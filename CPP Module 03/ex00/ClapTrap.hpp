/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 09:45:22 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/27 11:43:45 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
private:
    std::string Name;
    int         Hit;
    int         Energy;
    int         attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string Name);
    ClapTrap(const ClapTrap& obj);
    ClapTrap& operator=(const ClapTrap& other);
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    ~ClapTrap();
};


#endif