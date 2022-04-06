/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:38:00 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/04 12:31:24 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string w_type)
{
	type = w_type;
}

const std::string&	Weapon::getType()
{
	const std::string& typeRef = type;
	return(typeRef);
}

void	Weapon::setType(std::string name)
{
	type = name;
}
