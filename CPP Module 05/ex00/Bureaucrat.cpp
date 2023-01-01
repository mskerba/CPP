/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:37:40 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/01 18:46:32 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

const std::string Bureaucrat::getname()const
{
	return (this->name);
}

int Bureaucrat::getgrade() const
{
	return (this->grade);
}

Bureaucrat& operator<<(std::ostream& out,Bureaucrat& bu)
{
	out << bu.getname() << ", bureaucrat grade " << bu.getgrade() << std::endl;
}

Bureaucrat::~Bureaucrat(){}
