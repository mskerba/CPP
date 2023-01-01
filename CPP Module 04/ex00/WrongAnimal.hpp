/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:16:43 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/31 15:19:53 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& obj);
	WrongAnimal& operator=(const WrongAnimal& other);
	void makeSound(void) const;
	std::string getType(void) const;
	~WrongAnimal();
};

#endif
