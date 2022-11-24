/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:06:15 by mskerba           #+#    #+#             */
/*   Updated: 2022/11/21 11:15:00 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact(){};

void	contact::set_first_name()
{
	first_name = "";
	while (first_name == "")
	{	
		std::cout << "\n	first name : ";
		getline(std::cin , first_name);
		if(std::cin.eof())
			exit(0);
	}
}

void	contact::set_last_name()
{
	last_name = "";
	while (last_name == "")
	{	
		std::cout << "\n	last name : ";
		getline(std::cin, last_name);
		if(std::cin.eof())
			exit(0);
	}
}

void	contact::set_nickname()
{
	nickname = "";
	while (nickname == "")
	{	
		std::cout << "\n	nickname : ";
		getline(std::cin, nickname);
		if(std::cin.eof())
			exit(0);
	}
}

void	contact::set_d_secret()
{
	d_secret = "";
	while (d_secret == "")
	{	
		std::cout << "\n	darkest secret : ";
 		getline(std::cin, d_secret);
		if(std::cin.eof())
			exit(0);
	}
}

void	contact::set_phone_number()
{
	phone_number = "";
	while (phone_number == "")
	{	
		std::cout << "\n	phone number : ";
		getline(std::cin, phone_number);
		if(std::cin.eof())
			exit(0);
	}
}

void	contact::set_index(int i)
{
	index = i;
}

void	contact::get_first_name()
{
	std::cout << "\n	first name : ";
	std::cout << first_name;
	std::cout << std::endl;
}

void	contact::get_last_name()
{
	std::cout << "	last name : ";
	std::cout << last_name;
	std::cout << std::endl;
}

void	contact::get_nickname()
{
	std::cout << "	nickname : ";
	std::cout << nickname;
	std::cout << std::endl;
}

void	contact::get_d_secret()
{
	std::cout << "	darkest secret : ";
	std::cout << d_secret;
	std::cout << std::endl;
}

void	contact::get_phone_number()
{
	std::cout << "	phone number : ";
	std::cout << phone_number;
	std::cout << "\n\n";
}
