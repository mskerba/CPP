/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:12:49 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/05 13:42:00 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROEFORM_HPP
#define ROEFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& obj);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
	void execute(Bureaucrat const & executor) const;
	~RobotomyRequestForm();
};

std::ostream& operator<<(std::ostream& out, RobotomyRequestForm& bu);

#endif
