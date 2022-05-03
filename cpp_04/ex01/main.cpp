/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:32:37 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/03 14:53:07 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(int argc, char **argv){
	(void)argc;
	(void)argv;
	Animal *animals[10];

	std::cout << "\n\nANIMAL ASSIGNATION LOOP" << std::endl;
	for (int i = 0; i < 10; i++){
		std::cout << i << "\n";
		if (i % 2 == 0)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
	}
	std::cout << "\n\nMAKE SOUND LOOP" << std::endl;
	for(int i = 0; i < 10; i++){
		std::cout << i << "\n";
		animals[i]->makeSound();
	}
	std::cout << "\n\nIDEA LOOP" << std::endl;
	if (argc > 1){
		for(int i = 0; i < 10; i++)
			animals[i]->giveIdea(argv);
		for (int i = 1; i < 10; i++){
			std::cout << i << "\n";
			animals[i]->printIdea();
		}
	}
	std::cout << "\nDEEP COPY TEST\n\n";
	Cat *test = new Cat;
	test->giveIdea(argv);
	std::cout << "Test cat ideas : \n";
	test->printIdea();
	Cat *cpy = new Cat(*test);
	delete test;
	std::cout << "Cpy ideas after test object delete: " << std::endl;
	cpy->printIdea();
	delete cpy;
	std::cout << "\n\nANIMAL DESTRUCTOR LOOP\n" << std::endl;
	for (int i = 9; i >= 0; i--){
		delete animals[i];
	}
	std::cout << "\nOUT OF SCOPE TESTING" << std::endl;
	Dog basic;
	std::cout << '\n';
	basic.giveIdea(argv);
	{
		Dog temp = basic;
	}
	basic.printIdea();
	{
		Dog temp(basic);
	}
	basic.printIdea();
}
