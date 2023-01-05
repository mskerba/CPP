/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:14:48 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/05 15:24:35 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHCRFORM_HPP
#define SHCRFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& obj);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
	void execute(Bureaucrat const & executor) const;
	~ShrubberyCreationForm();
};

#endif
