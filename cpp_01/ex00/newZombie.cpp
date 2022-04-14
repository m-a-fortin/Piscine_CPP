/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:51:21 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/14 16:00:13 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Function that allocate a Zombie object, sets his name and return it.
Zombie *newZombie( std::string name )
{
	Zombie *newZombie = new Zombie(name);
	return (newZombie);
}

