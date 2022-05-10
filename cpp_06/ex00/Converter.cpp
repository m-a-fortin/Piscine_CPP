/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:26:10 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/10 13:05:03 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <cctype>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits.h>
#include <float.h>

Converter::Converter() {	
	char_error = false;
	notation = false;
	fatal = false;
}

Converter::Converter(const Converter& other)
{
	*this = other;
}

Converter& Converter::operator=(const Converter& rhs)
{
	this->char_error = rhs.char_error;
	this->notation = rhs.notation;
	this->fatal = rhs.fatal;
	this->notation_str = rhs.notation_str;
	this->arg = rhs.arg;
	return *this;
}

Converter::Converter(const std::string& arg) : arg(arg){
	char_error = false;
	notation = false;
	fatal = false;
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
			notation = true;
			notation_str = this->arg;
			return ;
		}
	if (this->arg.compare("-inf") == 0 || this->arg.compare("+inf") == 0
		|| this->arg.compare("nan") == 0)
		{
			this->type = "double";
			notation = true;
			notation_str = this->arg;
			return ;
		}
	if (this->arg.length() == 1 && (*it > 32 && *it < 127) && std::isdigit(*it) == false){
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
			return ;
	}
	fatal = true;
}

std::string	Converter::getType() const{
	return this->type;
}

void	Converter::isInt(){
	r_int = atoi(this->arg.c_str());
	if ((r_int == -1 && this->arg.length() != 2) || (r_int == 0 && this->arg.length() != 1))
		fatal = true;
	if (r_int > 32 && r_int < 127)
		r_char = static_cast<char>(r_int);
	else
		char_error = true;
	r_float = static_cast<float>(r_int);
	r_double = static_cast<double>(r_int);
}

void	Converter::isFloat(){
	float	oflow = -1.0f;
	r_float = (float)atof(this->arg.c_str());
	if (r_float == oflow && this->arg.length() != 2)
		fatal = true;
	r_int = static_cast<int>(r_float);
	if (r_float > 32 && r_float < 127)
		r_char = static_cast<char>(r_float);
	else
		char_error = true;	
	r_double = static_cast<double>(r_float);
}

void Converter::isDouble(){
	double	oflow = -1.0;
	r_double = atof(this->arg.c_str());
	if (r_double == oflow && this->arg.length() != 2)
		fatal = true;
	r_int = static_cast<int>(r_double);
	if (r_double > 32 && r_double < 127)
		r_char = static_cast<char>(r_double);
	else
		char_error = true;
	r_float = static_cast<float>(r_double);
}

void	Converter::isChar(){
	const char *cstr = this->arg.c_str();
	r_char = *cstr;
	r_int = static_cast<int>(r_char);
	r_float = static_cast<float>(r_char);
	r_double = static_cast<double>(r_char);
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

void	Converter::showFatal() const{
	std::cout << "char: impossible" << "\n";
	std::cout << "int: impossible" << "\n";
	std::cout << "float: impossible" << "\n";
	std::cout << "double: impossible" << std::endl;
}
void	Converter::showConversion() const{

	if (fatal == true)
		return showFatal();
	std::cout << "char: ";
	if (notation == true)
		std::cout << "impossible" << "\n";
	else if (char_error == true)
		std::cout << "Non displayable" << "\n";
	else
		std::cout << r_char << "\n";
	std::cout << "int: ";
	if (notation == true)
		std::cout << "impossible" << "\n";
	else
	{
		if (r_int == -1 || r_int >= INT_MAX || r_int <= INT_MIN)
		{
			if (this->arg == "-1")
				std::cout << r_int << '\n';
			else
				std::cout << "impossible" << "\n";
		}
		else
	 		std::cout << r_int << '\n';
	}
	if (this->type != "float" && this->type != "double"){
		if (r_float >= FLT_MAX || r_float <= -FLT_MAX)
					std::cout << "float: " <<  "impossible" << "\n";
		else
			std::cout << "float: " << std::fixed <<  std::setprecision(1) << r_float << "f" << '\n';
		if (r_double >= DBL_MAX || r_double <= -DBL_MAX)
					std::cout << "double: " << "impossible" << "\n";
		else
			std::cout << "double: " << std::fixed <<  std::setprecision(1) << r_double << '\n';
	}
	else{
		if (notation_str.compare(0, 3, "nan") == 0){
			std::cout << "float: " << "nanf" << '\n';
			std::cout << "double: " << "nan" << '\n';
		}
		else if (notation == true){
			std::cout << "float: " << notation_str << '\n';
			std::cout << "double: " << notation_str << '\n';
		}
		else{
			if (r_float >= FLT_MAX || r_float <= -FLT_MAX)
					std::cout << "float: " <<  "impossible" << "\n";
			else
				std::cout << "float: " << r_float << "f" << '\n';
			if (r_double >= DBL_MAX || r_double <= -DBL_MAX)
					std::cout << "double: " << "impossible" << "\n";
			else
				std::cout << "double: " << r_double << '\n';
	}
		}
}
