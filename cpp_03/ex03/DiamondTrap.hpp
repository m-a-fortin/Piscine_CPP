/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:45:50 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/25 14:45:52 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap&);
	DiamondTrap(const std::string& name);
	DiamondTrap& operator=(const DiamondTrap&);
	~DiamondTrap();
	void attack(const std::string& target);
	void	whoAmI() const;
private:
	std::string name;
};
