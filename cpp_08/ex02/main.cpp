/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:40:02 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/17 13:29:37 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main(void){

	{
	MutantStack<int> s1;
	std::cout << "TESTING MUTANTSTACK\n\nASSIGNING VALUE WITH PUSH(STACK) FROM 0 TO 50\n";
	for (int i = 0; i <= 10; i++)
	{
		s1.push(i);
	}
	MutantStack<int>::iterator it = s1.begin();
	MutantStack<int>::iterator end = s1.end();
	while (it != end){
		std::cout << *it << std::endl;
		it++;
	}
	}
	{
	std::list<int> s1;
	std::cout << "TESTING LIST(should be the same)\n\nASSIGNING VALUE WITH PUSH(STACK) FROM 0 TO 50\n";
	for (int i = 0; i <= 10; i++)
	{
		s1.push_back(i);
	}
	std::list<int>::iterator it = s1.begin();
	std::list<int>::iterator end = s1.end();
	while (it != end){
		std::cout << *it << std::endl;
		it++;
	}
	}
	return 0;
}
