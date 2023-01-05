/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:05:54 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/05 13:38:34 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form::Form():name(""),grade_s(1),grade_e(1){(void)grade_e;}

Form::Form(std::string name, int g):name(name), isigned(false), grade_s(g), grade_e(g)
{
	if(grade_s < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(grade_s > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form::Form(const Form& obj):name(obj.name),grade_s(obj.grade_s),grade_e(obj.grade_e)
{
	if(this->grade_s < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(this->grade_s > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form& Form::operator=(const Form& obj)
{
	this->isigned = obj.isigned;
	return (*this);
}

std::string Form::getname() const
{
	return (this->name);
}

int Form::getgrade() const
{
	return (this->grade_s);
}

void Form::beSigned(Bureaucrat& b)
{
	if(b.getgrade() <=  this->grade_s)
		isigned = true;
	else
		throw Form::GradeTooLowException();
}

bool Form::getisigned() const
{
	return (isigned);
}

std::ostream& operator<<(std::ostream& out,Form& bu)
{
	out << bu.getname() << ", Form grade " << bu.getgrade() << std::endl;
	return (out);
}

Form::~Form(){}
