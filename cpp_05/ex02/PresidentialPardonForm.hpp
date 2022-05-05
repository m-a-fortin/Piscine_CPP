/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:32:10 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/05 14:51:13 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
//Grade to sign = 25 , Grade to execute = 5
class PresidentialPardonForm : public AForm 
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm&);
	PresidentialPardonForm& operator=(const PresidentialPardonForm&);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	virtual void execute(Bureaucrat const & executor) const;
};
