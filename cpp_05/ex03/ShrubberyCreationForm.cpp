/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:31:49 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/05 16:52:09 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137){
	setTarget("Default");
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(){
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs){
	setTarget(rhs.getTarget());
	setName(rhs.getName());
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137){
	setTarget(target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{

	checkExecution(executor);
	std::fstream file;
	std::string name = getTarget() + "_shrubbery";
	file.open(name, std::fstream::out);
	for (int i = 0; i < 1000; i++)
	{
	file << "       _-_\n"
		<< "    /~~   ~~\\\n"
		<< " /~~         ~~\\\n"
		<< "{               }\n"
		<<  "\\  _-     -_  /\n"
		<< "   ~  \\ //  ~\n"
		<< "_- -   | | _- _\n"
		<< "  _ -  | |   -_\n"
		<< "      // \\\\\n" << std::endl;
	}
	file.close();

}
