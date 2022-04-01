/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:38:00 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/01 18:43:55 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

const std::string&	Weapon::getType()
{
	std::string&	const typeRef = type;
	return(typeRef);
}

void	Weapon::setType(std::string name)
{
	type = name;
}