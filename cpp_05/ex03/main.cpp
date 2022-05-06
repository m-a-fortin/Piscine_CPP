/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:09:39 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/06 10:08:16 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int	main(void){
	Intern me;
	Bureaucrat b("Bob", 1);
	me.makeForm("test", "evaluateur");
	me.makeForm("presidential request", "evaluateur");
	me.makeForm("shrubbery request", "evaluateur");
	std::cout << "TESTING ROBOTOMY" << std::endl;
	{
		Form *test =  me.makeForm("robotomy request", "evaluateur");
		b.signForm(*test);
		test->execute(b);
		delete test;
	}
	std::cout << "TESTING SHRUBBERY" << std::endl;
	{
		Form *test =  me.makeForm("shrubbery request", "evaluateur");
		b.signForm(*test);
		test->execute(b);
		delete test;
	}
	std::cout << "TESTING PRESIDENTIAL" << std::endl;
	{
		Form *test =  me.makeForm("presidential request", "evaluateur");
		b.signForm(*test);
		test->execute(b);
		delete test;
	}
}

