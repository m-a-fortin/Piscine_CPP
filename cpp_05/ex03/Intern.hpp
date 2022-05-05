/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:49:40 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/05 16:53:02 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Form.hpp"

class Form;

class Intern
{
public:
	Intern();
	Intern(const Intern&);
	Intern& operator=(const Intern&);
	~Intern();
	Form* makeForm(std::string name, std::string target) const;
};

Form *return_pres(std::string target);
Form *return_robot(std::string target);
Form *return_shrub(std::string target);
