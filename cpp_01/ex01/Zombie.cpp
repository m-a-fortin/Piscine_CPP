/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:42:38 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/14 16:11:17 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie::Zombie(){
}

//Destructor
Zombie::~Zombie(void)
{
	std::cout << name << " has been destroyed with a stick in the brain." << std::endl;
}

void	Zombie::setName(std::string name){
	this->name = name;
}

//Announce itself using the name member.
void	Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
