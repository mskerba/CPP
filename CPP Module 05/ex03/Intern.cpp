/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:03:07 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/08 13:00:54 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


Intern::Intern(){}

Intern::Intern(const Intern& obj)
{
	*this = obj;	
}

Intern& Intern::operator=(const Intern& obj)
{
	(void)obj;
	return (*this);
}

Form* Intern::makeForm(std::string name, std::string target)
{
	Form* ptr[3] = {new PresidentialPardonForm(target), new ShrubberyCreationForm(target), new RobotomyRequestForm(target)};
	
    std::string nameform[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    int i = -1;
	int j = -1;

    while ( ++i < 3)
        if (name == nameform[i])
			j = i;
		else
			delete ptr[i];
	if(j != -1)
		return (ptr[j]);
	throw Intern::FormNameDoesExist();
}

const char* Intern::FormNameDoesExist::what() const throw()
{
	return ("Form name passed as parameter doesn’t exist"); 
}

Intern::~Intern(){}


