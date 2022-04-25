/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:32:37 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/25 17:50:27 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
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

	delete(test);
	std::cout << "\n___________\n" << " DOG TEST " << std::endl;
	test = new Dog;
	dog.makeSound();
	test->makeSound();
}
