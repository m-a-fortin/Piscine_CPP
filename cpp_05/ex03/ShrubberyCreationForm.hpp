/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:32:10 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/05 16:52:15 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
//Grade to sign = 145 , Grade to execute = 137
class ShrubberyCreationForm : public Form 
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	virtual void execute(Bureaucrat const & executor) const;
};
