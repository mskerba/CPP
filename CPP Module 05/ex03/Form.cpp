/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:05:54 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/05 15:46:30 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form::Form():name(""),grade_s(1),grade_e(1){}

Form::Form(std::string name, int g, int ge):name(name), isigned(false), grade_s(g), grade_e(ge)
{
	if(grade_s < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(grade_s > 150)
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

int  Form::getgradeExec()const
{
	return (this->grade_e);
}


bool Form::getisigned() const
{
	return (isigned);
}

void Form::beSigned(Bureaucrat& b)
{
	if(b.getgrade() <=  this->grade_s)
		isigned = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const _NOEXCEPT
{
	return "The Form grade is too high"; 
}

const char* Form::GradeTooLowException::what() const _NOEXCEPT
{
	return "The Form grade is too low"; 
};

std::ostream& operator<<(std::ostream& out,Form& bu)
{
	out << bu.getname() << ", Form grade " << bu.getgrade() << std::endl;
	return (out);
}

Form::~Form(){}
