/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:33:56 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/05 13:30:23 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string name;
	int	grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int g);
	Bureaucrat(const Bureaucrat& obj);
	Bureaucrat& operator=(const Bureaucrat& obj);
	class GradeTooHighException : public std::exception
	{
   	public:
		const char* what() const _NOEXCEPT
		{
			return "The Bureaucrat grade is too high"; 
		};
  	};
	class GradeTooLowException : public std::exception
	{
   	public:
		const char* what() const _NOEXCEPT
		{
			return "The Bureaucrat grade is too low"; 
		};
  	};
	class EXECTooLowException : public std::exception
	{
   	public:
		const char* what() const _NOEXCEPT
		{
			return "The Bureaucrat execute is too low"; 
		};
  	};
	std::string getname() const;
	int  getgrade()const;
	void signForm(Form& form);
	void executeForm(Form const & form);
	void incrementgrade();
	void decrementgrade();
	~Bureaucrat();
};

std::ostream& operator<<(std::ostream& out,Bureaucrat& bu);

#endif
