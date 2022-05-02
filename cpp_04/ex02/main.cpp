/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:32:37 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 09:12:59 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void){
	Cat cat;
	Dog dog;
	//AAnimal animal;

	dog.makeSound();
	std::cout << dog.getType() << std::endl;

	cat.makeSound();
	std::cout << cat.getType() << std::endl;
}
