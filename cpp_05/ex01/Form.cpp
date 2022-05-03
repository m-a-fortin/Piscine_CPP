/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:53:45 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/03 16:53:45 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form() : name("John Doe"), signature(false), signReq(60), execReq(60){}

Form::Form(const Form& other) : signReq(other.signReq), execReq(other.execReq){
	*this = other;
}

Form& Form::operator=(const Form& rhs)
{
	this->name = rhs.name;
	this->signature = false;
	return *this;
}

Form::Form(const std::string& name, const int& signReq, const int& execReq) : name(name), signature(false), signReq(signReq), execReq(execReq){
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
void	Form::verifySignReq() const{
	if (this->signReq > 150){
		throw GradeTooLowException();
	}
	if (this->signReq < 1){
		throw GradeTooHighException();
	}
}

void	Form::verifyExecReq() const{
	if (this->execReq > 150){
		throw GradeTooLowException();
	}
	if (this->execReq < 1){
		throw GradeTooHighException();
	}
}

const char* Form::GradeTooLowException::what() const throw(){
				return ("Grade is too low");
}

const char* Form::GradeTooHighException::what() const throw(){
				return ("Grade is too high");
}

std::ostream& operator<<(std::ostream& stream, const Form& out){
	stream << out.getName() << ", form grade required to sign : " << out.getSignReq() 
	<< "\n" << out.getName() <<  ", form grade required to execute : " << out.getExecReq();
	return stream;
}
