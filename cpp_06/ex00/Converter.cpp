/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:26:10 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/06 15:28:27 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <cctype>
#include <iostream>
#include <cstdlib>
#include <iomanip>

Converter::Converter() {	
}

Converter::Converter(const Converter& other)
{
	*this = other;
}

Converter& Converter::operator=(const Converter& rhs)
{
	
	this->arg = rhs.arg;
	return *this;
}

Converter::Converter(const std::string& arg) : arg(arg){
}

Converter::~Converter()
{
}

void	Converter::setType(){

	std::string::iterator it = this->arg.begin();
	std::string::iterator end = this->arg.end();
	std::string::iterator fspace = --end;
	bool check = false;
	bool	found = false;

	if (this->arg.compare("-inff") == 0 || this->arg.compare("+inff") == 0
		|| this->arg.compare("nanf") == 0)
		{
			this->type = "float";
			return ;
		}
	if (this->arg.compare("-inf") == 0 || this->arg.compare("+inf") == 0
		|| this->arg.compare("nan") == 0)
		{
			this->type = "double";
			return ;
		}
	if (this->arg.length() == 1 && std::isalpha(*it) == true){
		this->type = "char";
		return;
	}
	if (*it == '-')
		it++;
	for (; it != end; it++){
		if (std::isdigit(*it) == false){
			check = true;
			break ;
		}
	}
	if (check == false){
		this->type = "int";
		return ;
	}
	check = false;
	for(; it != end; ++it){
		if (std::isdigit(*it) == false){
			if ((*it == '.' || (it == fspace && *it == 'f')) && found == false)
			{
				found = true;
				continue;
			}
			else
			{
				check = true;
				break ;
			}
		}
	}
	if (check == false){
		if (*fspace == 'f')
			this->type = "float";
		else
			this->type = "double";
	}
}

std::string	Converter::getType() const{
	return this->type;
}

void	Converter::isInt(){
	r_int = atoi(this->arg.c_str());
	r_char = (char)r_int;
	r_float = static_cast<float>(r_int);
	r_double = static_cast<double>(r_int);
}

void	Converter::isFloat(){
	r_float = (float)atof(this->arg.c_str());
	r_int = static_cast<int>(r_float);
	r_char = 0;
	r_double = static_cast<double>(r_float);
}

void Converter::isDouble(){
	r_double = atof(this->arg.c_str());
	r_int = static_cast<int>(r_double);
	r_char = 0;
	r_float = static_cast<float>(r_double);
}

void	Converter::isChar(){
	const char *cstr = this->arg.c_str();
	r_char = *cstr;
}

void	Converter::doConversion(){
	if (this->type == "char")
		return isChar();
	if (this->type == "int")
		return isInt();
	if (this->type == "float")
		return isFloat();
	if (this->type == "double")
		return isDouble();
}

void	Converter::showConversion() const{
	std::cout << "char: " << r_char << '\n';
	std::cout << "int: " << r_int << '\n';
	if (this->type != "float" && this->type != "double"){
		std::cout << "float: " << std::fixed <<  std::setprecision(1) << r_float << '\n';
		std::cout << "double: " << std::fixed <<  std::setprecision(1) << r_double << '\n';
	}
	else{
		std::cout << "float: " << r_float << '\n';
		std::cout << "double: " << r_double << '\n';
	}
}
