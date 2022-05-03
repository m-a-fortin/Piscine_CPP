/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:05:25 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/03 16:32:12 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <stdexcept>

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
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
private:
	std::string name;
	int		grade;
	void	verifyGrade();
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat&);
