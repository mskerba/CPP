/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:57:16 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/29 13:08:45 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string Name);
    FragTrap(const FragTrap& obj);
    FragTrap& operator=(const FragTrap& other);
    void	attack(const std::string& target);
    void highFivesGuys(void);
    ~FragTrap();
};



#endif
