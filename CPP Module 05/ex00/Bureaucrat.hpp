/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:33:56 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/03 12:59:44 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>

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
			return "The grade is too high"; 
		};
  	};
	class GradeTooLowException : public std::exception
	{
   	public:
		const char* what() const _NOEXCEPT
		{
			return "The grade is too low"; 
		};
  	};
	std::string getname() const;
	int  getgrade()const;
	void incrementgrade();
	void decrementgrade();
	~Bureaucrat();
};

std::ostream& operator<<(std::ostream& out,Bureaucrat& bu);

#endif
