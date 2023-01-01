/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:06:17 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/31 14:44:31 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat& obj);
	Cat& operator=(const Cat& other);
	void makeSound(void) const;
	~Cat();
};

#endif
