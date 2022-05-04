/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:53:12 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/04 15:40:20 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form();
	Form(const Form&);
	Form& operator=(const Form&);
	~Form();
	Form(const std::string& name, const int& sign, const int& exec);
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
	std::string	getName() const;
	int	getSignReq() const;
	int	getExecReq() const;
	bool	getSignature() const;
	void	beSigned(const Bureaucrat& b);
private:
	std::string	name;
	bool		signature;
	const	int	signReq;
	const	int	execReq;
	void	verifySignReq() const;
	void	verifyExecReq() const;
};

std::ostream& operator<<(std::ostream& stream, const Form& out);
