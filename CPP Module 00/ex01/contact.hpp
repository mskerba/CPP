/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:00:24 by mskerba           #+#    #+#             */
/*   Updated: 2022/11/21 11:56:50 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define  CONTACT_HPP

#include <stdio.h>
#include <unistd.h>
#include <climits>
#include <iostream>
#include <iomanip>

class contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	d_secret;
		std::string	phone_number;
		int			index;
	public:
		contact();
		void		set_first_name();
		void		set_last_name();
		void		set_nickname();
		void		set_d_secret();
		void		set_phone_number();
		void		set_index(int i);
		void		get_first_name();
		void		get_last_name();
		void		get_nickname();
		void		get_d_secret();
		void		get_phone_number();
		std::string	ret_first_name(){return (first_name);};
		std::string	ret_last_name(){return (last_name);};
		std::string	ret_nickname(){return (nickname);};
};

#endif