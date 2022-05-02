/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:06:21 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/02 15:19:55 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdexept>

Bureaucrat::Bureaucrat() : name("John Doe"), grade(42){
}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy){
	*this = cpy;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade){
	this->name = name; 
	this->grade = grade;
}

Bureaucrat& operator=(const Bureaucrat& rhs){
	this->name = rhs.name;
	this->grade = rhs.grade;
	return *this;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

const std::string& Bureaucrat::getName() const{
	return this->name;
}

void	Bureaucrat::incrementGrade(int amount){
	this->grade -= amount;
}

void	Bureaucrat::decraseGrade(int amount){
	this->grade += amount;
}
