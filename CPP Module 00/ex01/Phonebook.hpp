/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:57:55 by mskerba           #+#    #+#             */
/*   Updated: 2022/11/21 14:21:10 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
# include "contact.hpp"
# include <stdio.h>


class Phonebook
{
	private:
		contact contact[8];
		int		num_of_contact;
	public:
		Phonebook();
		void	add_new_contact();
		void	display_contact(int index);
		void	display_tab_contact(int index);
		int		get_num_contact();
		void	set_num_contact();	
};

void	display_list(Phonebook	phonebook);
void	display_f_line();
void	display_line();

#endif