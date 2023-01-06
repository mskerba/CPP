/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:27:12 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/05 15:25:09 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():Form(){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("shrubbery creation", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj):Form("shrubbery creation", 145, 137)
{
	this->target = obj.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	this->target = obj.target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(this->getisigned() && executor.getgrade() <= 137)
	{
		std::ofstream    file;
		std::string tree = "      .  .  .    .  .     ..    .          \n   .                 .         .  .        \n                   .               .       \n   .               .                .. .   \n  .          .            .              . \n  .            '.,        .               .\n  .              'b      *                 \n   .              '$    #.                .\n  .    .           $:   #:               . \n..      .  ..      *#  @):        .   . .  \n             .     :@,@):   ,.**:'   .     \n .      .,         :@@*: ..**'      .   .  \n          '#o.    .:(@'.@* '  .            \n  .  .       'bq,..:,@@*'   ,*      .  .   \n             ,p$q8,:@)'  .p*'      .       \n      .     '  . '@@Pp@@*'    .  .         \n       .  . ..    Y7'.'     .  .           \n                 :@):.                     \n                .:@:'.                     \n              .::(@:.                      \n";
        file.open(this->target + "_shrubbery");
        if (!file)
            exit(0);
		
		file << tree;
        file.close();
	}
	else
		throw ShrubberyCreationForm::GradeTooLowException();
}


ShrubberyCreationForm::~ShrubberyCreationForm(){}
