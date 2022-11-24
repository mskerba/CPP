/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:23:15 by mskerba           #+#    #+#             */
/*   Updated: 2022/11/21 11:16:46 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <chrono>

Phonebook    add(Phonebook	phonebook)
{
	phonebook.add_new_contact();
	return (phonebook);
}


void    search(Phonebook	phonebook)
{
	std::string	in;

	if (!phonebook.get_num_contact())
	{
		std::cout << "		* The phonebook is empty *\n\n";
		return ;
	}
	display_list(phonebook);
	while (in == "")
	{
		std::cout << "\n	Enter index : ";
		getline(std::cin, in);
		if(std::cin.eof())
			exit(0);
	}
	if(!isdigit(in[0]) || in[1])
    {
	    std::cout << "		* WRONG INDEX *\n\n";
        return ;
    }
	phonebook.display_contact(std::stoi(in));
}

void display_menu()
{
	std::cout << "ENTER THE INPUT :\n";
	std::cout << "		ADD\n";
	std::cout << "		SEARCH\n";
	std::cout << "		EXIT\n";
	std::cout << "-->";
	
}

int main()
{
	std::string	line;
	Phonebook	phonebook;

	line = "";
	while (1)
	{
		display_menu();
		getline(std::cin, line);
		if (line == "ADD")
			phonebook = add(phonebook);
		else if (line == "SEARCH")
			search(phonebook);
		else if(line == "EXIT" || std::cin.eof())
			exit(0);
		else
			std::cout << "			* THI INPUT IN NOT VALID *			\n";
	}
}