/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:35:17 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/01 17:30:01 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& obj);
	Brain& operator=(const Brain& obj);
	std::string getIdeas(int i) const;
	void 		setIdeas(std::string id, int i);
	~Brain();
};



#endif