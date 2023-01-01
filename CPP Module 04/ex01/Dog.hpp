/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:06:27 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/01 18:01:15 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog& obj);
	Dog& operator=(const Dog& other);
	void setBrain(std::string id, int i);
	std::string getBrain(int i) const;
	void makeSound(void) const;
	~Dog();
};

#endif
