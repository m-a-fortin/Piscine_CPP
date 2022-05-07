/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:53:45 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/07 11:29:04 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form() : name("John Doe"), signature(false), signReq(60), execReq(60){}

Form::Form(const Form& other) : signReq(other.signReq), execReq(other.execReq){
	*this = other;
}

Form& Form::operator=(const Form& rhs){
	if (this != &rhs){
	this->signature = rhs.signature;
	}
	return *this;
}

Form::Form(const std::string& name, const int& signReq, const int& execReq) : name(name), signature(false), signReq(signReq), execReq(execReq){
	verifyReq();
}

Form::~Form(){}

std::string Form::getName() const{
	return this->name;
}

int	Form::getSignReq() const{
	return this->signReq;
}

int	Form::getExecReq() const{
	return this->execReq;
}

bool	Form::getSignature() const{
	return this->signature;
}

void	Form::verifyReq() const{
	if (this->execReq > 150 || this->signReq > 150){
		throw GradeTooLowException();
	}
	if (this->execReq < 1 || this->signReq < 1){
		throw GradeTooHighException();
	}
}

const char* Form::GradeTooLowException::what() const throw(){
				return ("Grade is too low");
}

const char* Form::GradeTooHighException::what() const throw(){
				return ("Grade is too high");
}

void	Form::beSigned(const Bureaucrat& b){
	int	b_grade = b.getGrade();
	
	if (b_grade > this->signReq){
		throw GradeTooLowException();
	}
	else
		this->signature = true;
}

std::ostream& operator<<(std::ostream& stream, const Form& out){
	stream << out.getName() << ", form grade required to sign : " << out.getSignReq() 
	<< "\n" << out.getName() <<  ", form grade required to execute : " << out.getExecReq();
	return stream;
}
