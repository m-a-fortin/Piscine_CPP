/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:38:21 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/11 17:10:04 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class	Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& cpy);
		Fixed(const int value);
		Fixed(const float value);
		Fixed&	operator=(Fixed	fixed);
		void	operator<<(Fixed fixed);
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int			value;
		bool				f;
		bool				i;
		static const int	bits = 8;
};
