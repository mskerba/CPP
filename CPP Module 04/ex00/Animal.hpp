/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:00:16 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/31 15:12:48 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& obj);
	Animal& operator=(const Animal& other);
	virtual void makeSound(void) const;
	std::string getType(void) const;
	~Animal();
};

#endif
