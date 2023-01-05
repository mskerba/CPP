/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:05:40 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/05 13:26:02 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm::RobotomyRequestForm():Form(){}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("robotomy request", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj):Form("robotomy request", 72, 45)
{
	this->target = obj.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	this->target = obj.target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(this->getisigned() && executor.getgrade() <= 45)
	{
		if(rand() % 2)
			std::cout << this->target << " has been robotomized successfully \n";
		else
			std::cout << this->target << " has been robotomized unsuccessfully \n";
	}
	else
		throw RobotomyRequestForm::GradeTooHighException();
}

std::ostream& operator<<(std::ostream& out,RobotomyRequestForm& bu)
{
	out << bu.getname() << ", RobotomyRequestForm grade " << bu.getgrade() << std::endl;
	return (out);
}

RobotomyRequestForm::~RobotomyRequestForm(){}