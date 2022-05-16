/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 12:36:18 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/16 12:22:06 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int	main(void){

	{
	std::cout << "TESTING VECTOR\n";
	std::vector<int>	box(10);
	for (int i = 0; i < 10; i++){
		if (i == 8)
		{
			std::cout << "Adding : 42 to the vector\n";
			box.push_back(42);
		}
		else
		{
			std::cout << "Adding : " << i << " to the vector\n";
			box.push_back(i);
		}
	}

	{
		std::cout << "SEARCHING FOR VALUE : 42" << std::endl;
		std::vector<int>::iterator it = ::easyfind(box, 42);
		if (it != box.end())
			std::cout << "Printing *it: " << *it << std::endl;
		else
			std::cout << "Value not found (box.end())" << std::endl;
	}
	
	{
		std::cout << "SEARCHING FOR VALUE : 45" << std::endl;
		std::vector<int>::iterator it = ::easyfind(box, 45);
		if (it != box.end())
			std::cout << *it << std::endl;
		else
			std::cout << "Value not found (box.end())" << std::endl;
	}
	}



	{
	std::cout << "\n\nTESTING WITH LIST\n";
	std::list<int>	box;
	for (int i = 0; i < 10; i++){
			if (i == 8)
		{
			std::cout << "Adding : 42 to the list\n";
			box.push_back(42);
		}
		else
		{
			std::cout << "Adding : " << i << " to the list\n";
			box.push_back(i);
		}
	}

	{
		std::cout << "SEARCHING FOR VALUE : 42" << std::endl;
		std::list<int>::iterator it = ::easyfind(box, 42);
		if (it != box.end())
			std::cout << "Printing *it: " << *it << std::endl;
		else
			std::cout << "Value not found (box.end())" << std::endl;
	}
	
	{
		std::cout << "SEARCHING FOR VALUE : 45" << std::endl;
		std::list<int>::iterator it = ::easyfind(box, 45);
		if (it != box.end())
			std::cout << *it << std::endl;
		else
			std::cout << "Value not found (box.end())" << std::endl;
	}
	}
}
