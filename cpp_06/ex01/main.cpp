/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:56:10 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/09 10:48:58 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "data.hpp"

uintptr_t serialize(Data* ptr){
	uintptr_t	raw = reinterpret_cast<uintptr_t>(ptr);
	return raw;
}

Data* deserialize(uintptr_t raw){
	Data	*ptr = reinterpret_cast<Data *>(raw);
	return ptr;
}

int	main(void){
	
	Data		*ptr = new Data;
	ptr->test_value = 42;
	uintptr_t	raw = 0;

	std::cout << "PRINTING DATA *PTR VALUE:\n" << ptr->test_value << "\n";
	std::cout << "Converting Data* to uintptr_t(serialize)" << std::endl;
	raw = serialize(ptr);

	std::cout << "Converting uintptr_t to Data*(deserialize)" << std::endl;
	Data *transformed = new Data;
	transformed = deserialize(raw);
	
	std::cout << "Printing Transformed Value (must be 42)\n";
	std::cout << transformed->test_value << std::endl;
	//delete ptr;

	delete transformed;

	std::cout << "\nTESTING REVERSE" << "\n";
	uintptr_t	value = 42;
	std::cout << "PRINTING UINTPTR_T VALUE:\n" << value << "\n";
	Data 		*reverse = deserialize(value);
	std::cout << "Converting uintptr_t to Data*(deserialize)" << std::endl;
	uintptr_t	new_value = serialize(reverse);
	std::cout << "Converting Data* to uintptr_t(serialize)" << std::endl;
	std::cout << "PRINTING UINTPTR_T VALUE AFTER CHANGES(must be 42):\n" << new_value << std::endl;

}
