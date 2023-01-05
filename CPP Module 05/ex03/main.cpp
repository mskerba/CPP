/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:39:16 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/05 16:48:01 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

void makeIt( std::string name)
{
	try {
		Intern someRandomIntern;
		Form* form;
		Bureaucrat bob("bob", 2000);


		form = someRandomIntern.makeForm( name, "Bender" );
		form->beSigned( bob );
		form->execute( bob );
		bob.executeForm(*form);
		if (form)
			delete form;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n" << "*****************************************************" << std::endl;
}

int main ( void ) {

	makeIt( "shrubbery creation" );
	makeIt( "robotomy request" );
	makeIt( "presidential pardon" );
	makeIt( "form " );
	// system("leaks Intern");

	return 0;
}
