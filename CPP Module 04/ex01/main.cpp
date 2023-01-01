/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:42:14 by mskerba           #+#    #+#             */
/*   Updated: 2023/01/01 18:01:53 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

// int main()
// {
// 	Animal *j[10];
// 	int i = 0;
// 	for (; i < 5; i++)
// 		j[i] = new Dog();
	// std::cout << std::endl;
// 	for (; i < 10; i++)
// 		j[i] = new Cat();
// 	for(i = 0; i < 10; i++)
// 		delete  j[i];
// 	system("leaks polymorphisme");
// 	return 0;
// }


#include <unistd.h>
int main()
{

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