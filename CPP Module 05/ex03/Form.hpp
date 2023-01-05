/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:06:05 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/04 18:07:25 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool	isigned;
	const int grade_s;
	const int grade_e;
public:
	Form();
	Form(std::string name, int g, int ge);
	Form& operator=(const Form& obj);
	class GradeTooHighException : public std::exception
	{
   	public:
		const char* what() const _NOEXCEPT
		{
			return "The Form grade is too high"; 
		};
  	};
	class GradeTooLowException : public std::exception
	{
   	public:
		const char* what() const _NOEXCEPT
		{
			return "The Form grade is too low"; 
		};
  	};
	std::string getname() const;
	int  getgrade()const;
	int  getgradeExec()const;
	bool getisigned() const;
	void beSigned(Bureaucrat& b);
	virtual void execute(Bureaucrat const & executor) const = 0;
	~Form();
};

std::ostream& operator<<(std::ostream& out,Form& bu);

#endif