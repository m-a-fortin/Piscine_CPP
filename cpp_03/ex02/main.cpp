/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:52:16 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/25 12:36:37 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	FragTrap frag("Frag");
	frag.attack("Evaluateur");
	frag.attack("Evaluateur");
	frag.attack("Evaluateur");
	frag.attack("Evaluateur");
	frag.beRepaired(1);
	frag.highFivesGuys();
	frag.takeDamage(20);
	frag.attack("Evaluateur");
}
