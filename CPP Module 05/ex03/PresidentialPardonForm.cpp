/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:21:09 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/05 15:44:46 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form(){}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("Presidential pardon", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj):Form("Presidential pardon", 25, 5)
{
	this->target = obj.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	this->target = obj.target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(this->getisigned() && executor.getgrade() <= 5)
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox \n";
	else
		throw PresidentialPardonForm::GradeTooLowException();
}

PresidentialPardonForm::~PresidentialPardonForm(){}
