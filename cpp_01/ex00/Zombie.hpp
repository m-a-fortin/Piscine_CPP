/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:43:26 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/01 15:46:45 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
	public:
		~Zombie();
		void		announce();
		void		setName(std::string set);
	private:
		std::string name;
};

void	randomChump(std::string name);
Zombie *newZombie( std::string name );
