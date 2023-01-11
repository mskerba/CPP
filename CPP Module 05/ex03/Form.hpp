/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:06:05 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/08 12:55:40 by mskerba          ###   ########.fr       */
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
		virtual ~Form();
	
	
		
		std::string getname() const;
		int  getgrade()const;
		int  getgradeExec()const;
		bool getisigned() const;
		void beSigned(Bureaucrat& b);
		virtual void execute(Bureaucrat const & executor) const = 0;
	
	
	
	
		
		class GradeTooHighException : public std::exception
		{
	   	public:
			const char* what() const throw();
	  	};
		class GradeTooLowException : public std::exception
		{
	   	public:
			const char* what() const throw();
	  	};
};

std::ostream& operator<<(std::ostream& out,Form& bu);

#endif