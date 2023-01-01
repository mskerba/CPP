/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:06:17 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/01 18:00:22 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat& obj);
	Cat& operator=(const Cat& other);
	void makeSound(void) const;
	void setBrain(std::string id, int i);
	std::string getBrain(int i) const;
	~Cat();
};

#endif
