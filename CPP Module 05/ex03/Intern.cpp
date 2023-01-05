/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:03:07 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/05 13:04:49 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


Intern::Intern(){}

Form* Intern::makeForm(std::string name, std::string target)
{
	// Form *s = new PresidentialPardonForm();
	(void)target;
	Form* ss[3] = {new PresidentialPardonForm(), new ShrubberyCreationForm(), new RobotomyRequestForm()};
	
    std::string nameform[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    int i = -1;

    while ( ++i < 3)
        if (name == nameform[i])
			return (ss[i]);
		return (nullptr);
}

Intern::~Intern(){}



//;
