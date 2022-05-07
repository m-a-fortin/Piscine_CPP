/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:53:12 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/07 11:36:57 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
public:
	AForm();
	AForm(const AForm&);
	AForm& operator=(const AForm&);
	virtual ~AForm();
	AForm(const std::string& name, const int& sign, const int& exec);
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
	virtual void	execute(Bureaucrat const & executor) const = 0;
private:
	const std::string	name;
	bool		signature;
	const	int	signReq;
	const	int	execReq;
	std::string target;
};

std::ostream& operator<<(std::ostream& stream, const AForm& out);
