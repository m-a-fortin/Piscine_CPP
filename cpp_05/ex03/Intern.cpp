/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:49:13 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/05 16:52:58 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Form *return_shrub(std::string target){ 
	return new ShrubberyCreationForm(target);
}

Form *return_robot(std::string target){ 
	return new RobotomyRequestForm(target);
}

Form *return_pres(std::string target){ 
	return new PresidentialPardonForm(target);
}

Intern::Intern() {}

Intern::Intern(const Intern& other){
	*this = other;
}

Intern& Intern::operator=(const Intern& rhs){
	(void)rhs;
	return *this;
}

Intern::~Intern(){
}

Form*	Intern::makeForm(std::string name, std::string target) const{
	Form* (*f[3])(std::string);
	f[0] = return_shrub;
	f[1] = return_robot;
	f[2] = return_pres;
	std::string name_arr[3];
	name_arr[0] = "shrubbery request";
	name_arr[1] = "robotomy request";
	name_arr[2] = "presidential request";
	int i = 0;
	while (i < 3){
		if (name == name_arr[i])
			break ;
		i++;
	}
	switch (i)
	{
		case 0 :
			std::cout << "Intern creates " << name << std::endl;
			return (f[0](target));
			break ;
		case 1 :
			std::cout << "Intern creates " << name << std::endl;
			return (f[1](target));
			break ;
		case 2 :
			std::cout << "Intern creates " << name << std::endl;
			return (f[2](target));
			break ;
		default :
			std::cout << "No form named : " << name << std::endl;
	}
	return (NULL);
}
