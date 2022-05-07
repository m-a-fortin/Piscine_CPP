/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:53:12 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/05 16:48:06 by mafortin         ###   ########.fr       */
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
	virtual ~Form();
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
	class NotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	std::string	getName() const;
	void		setName(const std::string& cpy);
	int		getSignReq() const;
	int		getExecReq() const;
	bool	getSignature() const;
	std::string	getTarget() const;
	void		setTarget(const std::string& cpy);
	void	beSigned(const Bureaucrat& b);
	void	verifyReq() const;
	void	checkExecution(Bureaucrat const & executor) const;
	virtual void	execute(Bureaucrat const & executor) const;
private:
	const std::string	name;
	bool		signature;
	const	int	signReq;
	const	int	execReq;
	std::string target;
};

std::ostream& operator<<(std::ostream& stream, const Form& out);
