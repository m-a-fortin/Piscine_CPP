/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:43:26 by mafortin          #+#    #+#             */
/*   Updated: 2022/03/22 12:18:44 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
	public:
		void	announce();
		Zombie(std::string name);
		~Zombie();
	private:
		std::string name;
};

void	randomChump(std::string name);
Zombie *newZombie( std::string name );
