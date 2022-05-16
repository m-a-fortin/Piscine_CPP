/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:57:19 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/16 17:41:38 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <list>
#include <cstdlib>
#include <iostream>
#include <ctime>

int	main(void){
	std::cout << "ERROR HANDLING:\n";
	{
	std::cout << "\n1)Adding too many numbers (10001 int in a list vs our 10000 sized Span)\n";
	Span	s1(10000);
	std::list<int> lst(10001);
	srand(static_cast<unsigned int>(time(NULL)));
	std::list<int>::iterator it = lst.begin();
	while (it != lst.end()){
		*it = rand();
		it++;
	}
	try{
	s1.addNumber(lst.begin(), lst.end());
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	}
	std::cout << "\n2)Creating Span of size(2) and adding 3 values\n";
	{
		Span s1(2);
		try{
			s1.addNumber(1);
			s1.addNumber(2);
			s1.addNumber(3);
		}
		catch(std::exception& e){
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n3)Creating Span of 1 or 0 and finding shortest / longest diff\n";
	{
	Span	s1(1);
	Span	s2;
	std::list<int> lst(10);
	srand(static_cast<unsigned int>(time(NULL)));
	std::list<int>::iterator it = lst.begin();
	while (it != lst.end()){
		*it = rand();
		it++;
	}
	try{
		s1.shortestSpan();
	}
	catch(std::exception& e){
			std::cout << e.what() << std::endl;
	}
	try{
		s2.longestSpan();
	}
	catch(std::exception& e){
			std::cout << e.what() << std::endl;
	}
	}
	{
	std::cout << "TESTING SHORT SPAN (1,10,20,25,100) should be 5\n";
	Span s1(5);
	s1.addNumber(1);
	s1.addNumber(10);
	s1.addNumber(20);
	s1.addNumber(25);
	s1.addNumber(100);
	std::cout << "Answer: " << s1.shortestSpan() << std::endl;
	std::cout << "TESTING LONGEST SPAN (1,10,20,25,100) should be 75\n";
	std::cout << "Answer: " << s1.longestSpan() << std::endl;
	}
	std::cout << "\nTESING WITH 42 000 RANDOM VALUE\n";
	{
		Span	s1(42000);
		std::list<int> lst(42000);
		srand(static_cast<unsigned int>(time(NULL)));
		std::list<int>::iterator it = lst.begin();
		while (it != lst.end()){
			*it = rand();
			it++;
		}
		s1.addNumber(lst.begin(), lst.end());
		std::cout << "SHORT SPAN RESULT : " << s1.shortestSpan() << std::endl;
		std::cout << "LONG SPAN RESULT : " << s1.longestSpan() << std::endl;
	}
	return 0;
}
