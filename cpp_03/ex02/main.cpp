/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:52:16 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/20 15:24:00 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap clap("Clap");
	ScavTrap scav("Scav");
	scav.attack("Evaluateur");
	scav.attack("Evaluateur");
	scav.attack("Evaluateur");
	scav.attack("Evaluateur");
	scav.beRepaired(1);
	scav.guardGate();
	scav.takeDamage(20);
	scav.attack("Evaluateur");

	clap.attack("Evaluateur");
	clap.attack("Evaluateur");
	clap.attack("Evaluateur");
	clap.attack("Evaluateur");
	clap.beRepaired(1);
	clap.takeDamage(20);
	clap.attack("Evaluateur");
}
