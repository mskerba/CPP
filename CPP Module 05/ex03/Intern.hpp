/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:03:09 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/05 10:36:06 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"


class Intern
{
public:
	Intern();
	Form* makeForm(std::string name, std::string target);
	~Intern();
};



#endif
