/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:53:12 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/03 16:49:57 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

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
private:
	std::string	name;
	bool		signature;
	const	int	signReq;
	const	int	execReq;
	void	verifySignReq() const;
	void	verifyExecReq() const;
};

std::ostream& operator<<(std::ostream& stream, const Form& out);
