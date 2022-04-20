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

int	main(void)
{
	ClapTrap clap("Marc-Andre");
	clap.attack("evaluateur");
	clap.beRepaired(1);
	clap.attack("evaluateur");
	clap.takeDamage(9);
	clap.beRepaired(1);
	clap.attack("evaluateur");
	clap.takeDamage(1);
	clap.attack("evaluateur");
	clap.beRepaired(1);
	clap.takeDamage(10000);
	clap.beRepaired(1000);
	clap.attack("evaluateur");
	
	ClapTrap two("Evaluateur");
	two.attack("Marc-Andre");
	two.attack("Marc-Andre");
	two.attack("Marc-Andre");
	two.attack("Marc-Andre");
	two.attack("Marc-Andre");
	two.attack("Marc-Andre");
	two.attack("Marc-Andre");
	two.attack("Marc-Andre");
	two.attack("Marc-Andre");
	two.attack("Marc-Andre");
	two.attack("Marc-Andre");
	clap.beRepaired(1);
}
