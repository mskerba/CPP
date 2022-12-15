/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:50:03 by mskerba           #+#    #+#             */
/*   Updated: 2022/11/24 15:47:04 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void megaphone(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (islower(str[i]))
			str[i] =  toupper(str[i]);
		std::cout << str[i];
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
		for (int i = 1; i < ac; i++)
			megaphone(av[i]);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}