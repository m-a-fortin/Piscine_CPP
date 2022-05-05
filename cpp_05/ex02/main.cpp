/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:09:39 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/05 15:29:34 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


#include <iostream>

int	main(void){

	std::cout << "SHRUB TESTING\n\n" << std::flush;
	{
	Bureaucrat executor("Bob", 138);
	ShrubberyCreationForm tree("Evaluateur"); //145 to sign, 137 to exec
	std::cout << "TESTING ERROR HANDLING (WRONG VALUE)" << std::endl;
	executor.executeForm(tree);
	executor.increaseGrade(9);
	std::cout << "GOOD GRADE " << std::endl;
	executor.executeForm(tree);
	executor.signForm(tree);
	executor.executeForm(tree);
	}
	std::cout << "ROBOTOMY TESTING\n\n" << std::flush;
	{
	Bureaucrat executor("Bob", 55);
	RobotomyRequestForm roboto("Evaluateur"); //72 to sign, 45 to exec
	std::cout << "TESTING ERROR HANDLING (WRONG VALUE)" << std::endl;
	executor.executeForm(roboto);
	executor.increaseGrade(10);
	std::cout << "GOOD GRADE " << std::endl;
	executor.executeForm(roboto);
	executor.signForm(roboto);
	std::cout << "ROBOTO EXECUTION LOOP (50%)" << std::endl;
	for (int i = 0; i < 5; i++)
		executor.executeForm(roboto);
	}
	std::cout << "PRESIDENT TESTING\n\n" << std::flush;
	{
	Bureaucrat executor("Bob", 15);
	PresidentialPardonForm president("Evaluateur"); //25 to sign, 5 to exec
	std::cout << "TESTING ERROR HANDLING (WRONG VALUE)" << std::endl;
	executor.executeForm(president);
	executor.increaseGrade(10);
	std::cout << "GOOD GRADE " << std::endl;
	executor.executeForm(president);
	executor.signForm(president);
	executor.executeForm(president);
	}
}
