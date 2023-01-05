/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:39:16 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/04 10:07:31 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat a("fff", 3);
		while(1)
			a.decrementgrade();
		std::cout << "kkk\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}