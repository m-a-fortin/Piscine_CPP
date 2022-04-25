/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:52:16 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/25 15:33:43 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "\nCONSTRUCTORS\n\n" << std::endl;
	std::cout << "__________" << std::endl;
	ClapTrap	clap("Clap");
	std::cout << "__________" << std::endl;
	ScavTrap	scav("Scav");
	std::cout << "__________" << std::endl;
	FragTrap	frag("Frag");
	std::cout << "__________" << std::endl;
	DiamondTrap	diamond("Diamond");
	std::cout << "__________" << std::endl;

	std::cout << " \nCLAPTRAP TESTING\n\n" << std::endl;
	clap.attack("Evaluateur");
	clap.beRepaired(1);
	clap.takeDamage(20);
	clap.attack("Evaluateur");
	
	std::cout << "__________" << std::endl;
	std::cout << " \nSCAVTRAP TESTING\n\n" << std::endl;
	scav.attack("Evaluateur");
	scav.beRepaired(1);
	scav.guardGate();
	scav.takeDamage(20);
	scav.attack("Evaluateur");

	std::cout << "__________" << std::endl;
	std::cout << " \nFRAGTRAP TESTING\n\n" << std::endl;
	frag.attack("Evaluateur");
	frag.beRepaired(1);
	frag.highFivesGuys();
	frag.takeDamage(20);
	frag.attack("Evaluateur");

	std::cout << "__________" << std::endl;
	std::cout << " \nDIAMOND TESTING\n\n" << std::endl;
	diamond.attack("Evaluateur");
	diamond.beRepaired(1);
	diamond.highFivesGuys();
	diamond.takeDamage(20);
	diamond.guardGate();
	diamond.whoAmI();

	std::cout << "__________" << std::endl;
	std::cout << " \nDESTRUCTOR\n\n" << std::endl;
}
