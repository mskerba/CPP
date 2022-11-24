/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:39:38 by mskerba           #+#    #+#             */
/*   Updated: 2022/11/21 14:06:20 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook():num_of_contact(0){};

void    Phonebook::add_new_contact()
{
    contact[num_of_contact % 8].set_first_name();
    contact[num_of_contact % 8].set_last_name();
    contact[num_of_contact % 8].set_nickname();
    contact[num_of_contact % 8].set_d_secret();
    contact[num_of_contact % 8].set_phone_number();
    contact[num_of_contact % 8].set_index(num_of_contact % 8);
    num_of_contact++;
}

void    Phonebook::set_num_contact()
{
    num_of_contact++;
}

void    Phonebook::display_contact(int index)
{
    if (index < 0 || index >= 8 || (get_num_contact() < 8 && index >= get_num_contact()))
    {
	    std::cout << "		* WRONG INDEX *\n\n";
        return ;
    }
    contact[index].get_first_name();
    contact[index].get_last_name();
    contact[index].get_nickname();
    contact[index].get_d_secret();
    contact[index].get_phone_number();
}

void    dis(std::string str)
{
    if(str.size() > 10)
    {
       str.resize(9);
       str.append("."); 
    }
    std::cout << std::setw(10);
    std::cout << str;
    std::cout << " ";
}

void    Phonebook::display_tab_contact(int index)
{
	std::string	str;
    
    std::cout << std::setw(17);
	std::cout << "|";
    std::cout << std::setw(10);
    std::cout << index << " ";
	std::cout << "| ";
    dis(contact[index].ret_first_name());
	std::cout << "| ";
    dis(contact[index].ret_last_name());
	std::cout << "| ";
    dis(contact[index].ret_nickname());
	std::cout << "|\n";
}

int Phonebook::get_num_contact()
{
    return (num_of_contact);
}
