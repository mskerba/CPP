/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:39:16 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/05 15:56:37 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void make(Form *form, Bureaucrat &b)
{
	try {
		form->beSigned( b );
		b.executeForm( *form);
	}
	catch ( std::exception& e ) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n-------------------------------" << std::endl;
}

int main ( void ) 
{
	{
		Bureaucrat	taha( "taha", 2 );
		Form*		form1 = new RobotomyRequestForm();
		make(form1, taha);
		delete form1;
	}

	{
		Bureaucrat	sultan( "sultan", 3 );
		Form*		form2 = new ShrubberyCreationForm( "Home" );
		make(form2, sultan);
		delete form2;
	}

	{
		Bureaucrat	l3arbi( "l3arbi", 10 );
		Form*		form3 = new PresidentialPardonForm( "Hotel" );
		make(form3, l3arbi);
		delete form3;
	}
	return 0;
}