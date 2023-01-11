/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:42:14 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/09 10:03:31 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#include <unistd.h>
int main()
{
	Animal *a = new Dog();
	Animal *b = new Cat();
	a = b;

    Cat d;
    for(int i = 0 ; i < 100 ; i++)
		d.setBrain("cat 1", i);

    Cat c(d);
    for(int i = 0 ; i < 100 ; i++)
		d.setBrain("cat 2", i);

    for(int i = 0 ; i < 100 ; i++)
        std::cout << c.getBrain(i) << std::endl;

    std::cout << "----------------" << std::endl;
	
    for(int i = 0 ; i < 100 ; i++)
        std::cout << d.getBrain(i) << std::endl;

    std::cout << "----------------" << std::endl;
    
	for(int i = 0; i < 100; i++)
		d.setBrain("Hello", i);

    for(int i = 0; i < 100; i++)
        std::cout << d.getBrain(i) << std::endl;

    return 0;
}