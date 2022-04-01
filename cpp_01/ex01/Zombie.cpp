/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:42:38 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/01 18:10:52 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Destructor
Zombie::~Zombie(void)
{
	std::cout << Zombie::name << " has been destroyed with a stick in the brain." << std::endl;
}
//Setter for name member.
void	Zombie::setName(std::string set)
{
	name = set;
}
//Announce itself using the name member.
void	Zombie::announce(void)
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
