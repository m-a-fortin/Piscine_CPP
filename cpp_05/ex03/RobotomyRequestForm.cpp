/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:31:49 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/05 15:00:38 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45){
	setTarget("Default");
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form(){
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs){
	setTarget(rhs.getTarget());
	setName(rhs.getName());
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45){
	setTarget(target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{

	checkExecution(executor);
	std::srand(time(NULL));

	if (rand() % 2 != 0)
		std::cout << getTarget() << " has been Robotomized" << std::endl;
	else
		std::cout << "Robotomy on " << getTarget() << " Failed" << std::endl;

}
