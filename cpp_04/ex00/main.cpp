/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:32:37 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/25 18:44:43 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void){
	Animal	animal;
	Cat		cat;
	Dog		dog;

	animal.makeSound();

	std::cout << "\n___________\n" << " CAT TEST " << std::endl;
	Animal	*test = new Cat;
	cat.makeSound();
	test->makeSound();

	delete test;
	std::cout << "\n___________\n" << " DOG TEST " << std::endl;
	test = new Dog;
	dog.makeSound();
	test->makeSound();
	delete test;

	std::cout << "\n___________\n" << " WRONG ANIMAL TEST " << std::endl;
	WrongCat wrongcat;
	WrongAnimal *wrong = new WrongCat();
	wrongcat.makeSound();
	wrong->makeSound();
	delete wrong;

	std::cout << "\n___________\n" << " DESTRUCTOR " << std::endl;
}
