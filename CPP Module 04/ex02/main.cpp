/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:42:14 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/02 08:36:48 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// Animal a;

	Animal *j[10];
	int i = 0;
	for (; i < 5; i++)
		j[i] = new Dog();
	std::cout << std::endl;
	for (; i < 10; i++)
		j[i] = new Cat();
	for(i = 0; i < 10; i++)
		delete  j[i];
	return 0;
}
