/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:43:26 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/14 16:10:57 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void		announce() const;
		void		setName(std::string name);
	private:
		std::string name;
};

void	randomChump(std::string name);
Zombie *newZombie( std::string name );
Zombie	*zombieHorde( int N, std::string name);
