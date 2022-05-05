/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:53:45 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/04 15:40:30 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>

AForm::AForm() : name("John Doe"), signature(false), signReq(60), execReq(60){}

AForm::AForm(const AForm& other) : signReq(other.signReq), execReq(other.execReq){
	*this = other;
}

AForm& AForm::operator=(const AForm& rhs){
	if (this != &rhs){
	this->name = rhs.name;
	this->signature = rhs.signature;
	}
	return *this;
}

AForm::AForm(const std::string& name, const int& signReq, const int& execReq) : name(name), signature(false), signReq(signReq), execReq(execReq){
	verifySignReq();
	verifyExecReq();
}

AForm::~AForm(){}

std::string AForm::getName() const{
	return this->name;
}

void	AForm::setName(const std::string& cpy){
	this->target = cpy;
}

int	AForm::getSignReq() const{
	return this->signReq;
}

int	AForm::getExecReq() const{
	return this->execReq;
}

bool	AForm::getSignature() const{
	return this->signature;
}

std::string	AForm::getTarget() const {
	return this->target;
}

void	AForm::setTarget(const std::string& cpy){
	this->target = cpy;
}

void	AForm::verifySignReq() const{
	if (getSignReq() > 150){
		throw GradeTooLowException();
	}
	if (getSignReq() < 1){
		throw GradeTooHighException();
	}
}

void	AForm::verifyExecReq() const{
	if (getExecReq() > 150){
		throw GradeTooLowException();
	}
	if (getExecReq() < 1){
		throw GradeTooHighException();
	}
}

const char* AForm::GradeTooLowException::what() const throw(){
				return ("Grade is too low");
}

const char* AForm::GradeTooHighException::what() const throw(){
				return ("Grade is too high");
}

const char* AForm::NotSignedException::what() const throw(){
				return ("Form not signed");
}

void	AForm::beSigned(const Bureaucrat& b){
	int	b_grade = b.getGrade();
	
	if (b_grade > this->signReq){
		throw GradeTooLowException();
	}
	else
		this->signature = true;
}

void	AForm::checkExecution(Bureaucrat const & executor) const{
	if (executor.getGrade() > getExecReq())
		throw GradeTooLowException();
	else if (getSignature() == false)
		throw NotSignedException();
}

std::ostream& operator<<(std::ostream& stream, const AForm& out){
	stream << out.getName() << ", AForm grade required to sign : " << out.getSignReq() 
	<< "\n" << out.getName() <<  ", AForm grade required to execute : " << out.getExecReq();
	return stream;
}
