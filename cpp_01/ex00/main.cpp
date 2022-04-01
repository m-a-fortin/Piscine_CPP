/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:00:09 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/01 16:41:05 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		if (i % 2 == 0)
			randomChump(argv[i]);
		else
		{
			std::string name;

			name = argv[i];
			Zombie *NewZombie = newZombie(name);
			NewZombie->announce();
			delete NewZombie;
		}
	}
	return (0);
}
