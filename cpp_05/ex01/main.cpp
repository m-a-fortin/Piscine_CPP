/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:09:39 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/04 15:44:15 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void){
	std::cout << "\nTry Catch Form with wrong value" << std::endl;
	try{
	Form test("test", 100, 159);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
	Form test("test", 0, 150);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\n";
	std::cout << "Form with good value" << std::endl;
	Form test("A-101", 50, 50);
	std::cout << test << std::endl;
	Bureaucrat bob("Bob", 51);
	std::cout << bob << std::endl;
	std::cout << "\nBureaucrat try catch with low value (should catch)" << std::endl;
	try{
		test.beSigned(bob);
		bob.signForm(test);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	bob.increaseGrade(1);
	std::cout << "Bureaucrat after increasing grade :\n" << bob << std::endl;
	std::cout << "\nTry catch with changed value (should do nothing)" << std::endl;
	try{
		test.beSigned(bob);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "_________" << std::endl;
	if (test.getSignature() == true){
		std::cout << "FORM SIGNATURE = TRUE\n" << std::endl;
	}
	std::cout << "\nDecreasing bureaucrat grade. (now too low)" << std::endl;
	bob.decreaseGrade(1);
	std::cout << bob << std::endl;
	std::cout << "SignForm testing :" << std::endl;
	bob.signForm(test);
	bob.increaseGrade(10);
	std::cout << "Increasing bureaucrat grade (now good)" << std::endl;
	std::cout << "SignForm testing :" << std::endl;
	bob.signForm(test);
}
