/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:51:21 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/01 18:07:32 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Function that allocate a Zombie object, sets his name and return it.
Zombie *newZombie( std::string name )
{
	Zombie *newZombie = new Zombie;
	
	newZombie->setName(name);
	return (newZombie);
}

