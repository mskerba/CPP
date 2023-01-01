/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:33:56 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/01 18:45:08 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT.HPP
#define BUREAUCRAT.HPP

class Bureaucrat
{
private:
	const std::string name;
	int	grade;
public:
	Bureaucrat();
	std::string getname() const;
	int getgrade()const;
	~Bureaucrat();
};

Bureaucrat& operator<<(std::ostream& out,Bureaucrat& bu);

#endif
