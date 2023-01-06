/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:23:51 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/05 15:44:46 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRAFORM_HPP
#define PRAFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& obj);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
	void execute(Bureaucrat const & executor) const;
	~PresidentialPardonForm();
};

#endif
