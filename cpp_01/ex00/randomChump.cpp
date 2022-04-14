/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:59:27 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/14 16:00:21 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Function that declare a zombie object, set his name member and announce itself with the announce method. Gets destructed at the end of the scope.
void	randomChump(std::string name)
{
	Zombie chump(name);
	chump.announce();
}
