/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:16:48 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/31 15:25:18 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
protected:
	std::string type;
public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat& obj);
	WrongCat& operator=(const WrongCat& other);
	void makeSound(void) const;
	~WrongCat();
};

#endif
