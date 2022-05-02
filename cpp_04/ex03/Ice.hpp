/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:14:21 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 12:03:34 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{	
public:
	Ice();
	Ice(const Ice&);
	Ice& operator=(const Ice&);
	virtual ~Ice();
	Ice(const std::string& type);
	virtual Ice* clone() const;
};
