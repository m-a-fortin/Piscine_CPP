/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:25:47 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/07 12:35:46 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <string>

class Converter
{
public:
	Converter();
	Converter(const Converter&);
	Converter& operator=(const Converter&);
	Converter(const std::string&);
	~Converter();
	void	setType();
	std::string	getType() const;
	void	isInt();
	void	isFloat();
	void	isDouble();
	void	isChar();
	void	doConversion();
	void	showConversion() const;
	void	showFatal() const;
private:
	std::string arg;
	std::string type;
	int	r_int;
	float	r_float;
	double	r_double;
	char	r_char;
	bool	char_error;
	bool	notation;
	bool	fatal;
	std::string notation_str;
};
