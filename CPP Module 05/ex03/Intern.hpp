/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:03:09 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/08 12:57:10 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& obj);
	Intern& operator=(const Intern& obj);
	Form* makeForm(std::string name, std::string target);
	class FormNameDoesExist : public std::exception
	{
	public:
		const char* what() const throw();
	};
	~Intern();
};



#endif
