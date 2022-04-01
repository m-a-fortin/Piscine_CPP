/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:43:26 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/01 18:11:23 by mafortin         ###   ########.fr       */
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

Zombie	*zombieHorde( int N, std::string name);
