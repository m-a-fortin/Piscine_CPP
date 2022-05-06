/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:31:49 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/05 15:00:38 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("President", 25, 5){
	setTarget("Default");
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(){
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs){
	setTarget(rhs.getTarget());
	setName(rhs.getName());
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("President", 25, 5){
	setTarget(target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	checkExecution(executor);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
