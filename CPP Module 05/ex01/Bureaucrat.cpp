/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:37:40 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/04 17:58:29 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int g):name(name)
{
	if(g < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(g > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj):name(obj.name),grade(obj.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	this->grade = obj.grade;
	return (*this);
}

void	Bureaucrat::incrementgrade()
{
	if(this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void	Bureaucrat::decrementgrade()
{
	if(this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

std::string Bureaucrat::getname() const
{
	return (this->name);
}

int Bureaucrat::getgrade() const
{
	return (this->grade);
}

void Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getname() << " signed " << form.getname() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getname() << " couldn’t sign " << form.getname() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out,Bureaucrat& bu)
{
	out << bu.getname() << ", bureaucrat grade " << bu.getgrade() << std::endl;
	return (out);
}

Bureaucrat::~Bureaucrat(){}
