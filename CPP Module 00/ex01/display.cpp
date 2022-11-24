/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:16:29 by mskerba           #+#    #+#             */
/*   Updated: 2022/11/21 14:07:35 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	display_f_line()
{
    std::cout << std::setw(28);
	std::cout << "|   index   ";
	std::cout << "| first name ";
	std::cout << "| last name  ";
	std::cout << "|  nickname  |" << std::endl;
}

void	display_line()
{
	int	l;

	l = 50;
    std::cout << std::setw(18);
	while (l--)
			std::cout << "-";
	std::cout << std::endl;
}

void	display_list(Phonebook	phonebook)
{
	int num;
	
	num = phonebook.get_num_contact();
	if (num > 8)
		num = 8;
	display_line();
	display_f_line();
	display_line();
	for (int i = 0; i < num; i++)
	{
		phonebook.display_tab_contact(i);
		display_line();
	}
}