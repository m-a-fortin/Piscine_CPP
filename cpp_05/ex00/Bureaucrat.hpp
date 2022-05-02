/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:05:25 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/02 15:18:25 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat&);
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat& operator=(const Bureaucrat&);
	int	getGrade() const;
	const std::string& getName() const;
	void	incrementGrade(int amount);
	void	decreaseGrade(int amount);
private:
	const	std::string& name;
	int		grade;
};