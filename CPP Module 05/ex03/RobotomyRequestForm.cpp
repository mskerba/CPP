/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:05:40 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/05 15:48:49 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <time.h>

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
	srand(time(0));
	if(this->getisigned() && executor.getgrade() <= 45)
	{
		std::cout << "zzzzzzzzzzzzzzzzzzzzz" << std::endl;
		
		if(rand() % 2)
			std::cout << this->target << " has been robotomized successfully \n";
		else
			std::cout << this->target << " has been robotomized unsuccessfully \n";
	}
	else
		throw RobotomyRequestForm::GradeTooHighException();
}

RobotomyRequestForm::~RobotomyRequestForm(){}