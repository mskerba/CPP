/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:42:14 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/31 17:04:29 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << std::endl;

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;

std::cout << std::endl;

i->makeSound();
j->makeSound();
meta->makeSound();

std::cout << std::endl;
const WrongAnimal* Wrongmeta = new WrongAnimal();
const WrongAnimal* Wrongi = new WrongCat();

std::cout << std::endl;
std::cout << Wrongi->getType()<< std::endl;
std::cout << std::endl;

Wrongi->makeSound();
Wrongmeta->makeSound();
return 0;
}