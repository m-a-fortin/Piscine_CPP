/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:32:10 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/05 14:51:13 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
//Grade to sign = 72 , Grade to execute = 45
class RobotomyRequestForm : public AForm 
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm&);
	RobotomyRequestForm& operator=(const RobotomyRequestForm&);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	virtual void execute(Bureaucrat const & executor) const;
};
