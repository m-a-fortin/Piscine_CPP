/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:43:26 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/14 15:59:54 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void		announce();
	private:
		std::string name;
};

void	randomChump(std::string name);
Zombie *newZombie( std::string name );
