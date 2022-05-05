/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:32:10 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/05 16:47:50 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
//Grade to sign = 145 , Grade to execute = 137
class ShrubberyCreationForm : public AForm 
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	virtual void execute(Bureaucrat const & executor) const;
};
