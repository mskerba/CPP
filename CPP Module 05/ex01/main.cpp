/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:39:16 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/06 10:22:49 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b("fff", 3);
		Form form("bob", 40);

		std::cout << ((form.getisigned())? "yes" : "no") <<std::endl;
		form.beSigned(b);
		std::cout << ((form.getisigned())? "yes" : "no") <<std::endl;
		b.signForm(form);
		while(1)
			b.decrementgrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}