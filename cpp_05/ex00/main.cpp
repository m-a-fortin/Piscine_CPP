/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:09:39 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/07 11:18:37 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void){
//Bureaucrat grades: 1 is max, 150 is min.
//Increasing the value reduce the grade.
//Ex. grade = 5 | grade++ | grade = 4
	std::cout << "TEST 1:\n" << "Instantiation with wrong value\n" << std::endl;
	try{
		Bureaucrat a("Test1", 1514123);
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat b("Test2", 0);
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\nTEST 2:\n" << "Grade increase or decrease higher or lower than min/max value\n" << std::endl;
	Bureaucrat c("Test1" , 1);
	Bureaucrat d("Test2", 150);
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	try{
		c.increaseGrade(1);
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		d.decreaseGrade(1);
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTEST 3\n" << "TESTING NORMAL BEHAVIOR\n" << std::endl;
	try{
		Bureaucrat e("test1", 1);
	}
	catch(std::exception& e){
			std::cout << e.what() << std::endl;
	}
	std::cout << "\n__________" << std::endl;
	try{
		Bureaucrat f("test2", 150);
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n__________" << std::endl;
	Bureaucrat g("test3", 5);
	Bureaucrat h("test4", 145);
	try{
		g.increaseGrade(3);
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n__________" << std::endl;
	try{
		h.decreaseGrade(2);
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
}
