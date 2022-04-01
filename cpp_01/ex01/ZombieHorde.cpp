/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:37:43 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/01 18:11:51 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Allocate N zombie object, set his name member and return a ptr to the first object.
Zombie	*zombieHorde( int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}
