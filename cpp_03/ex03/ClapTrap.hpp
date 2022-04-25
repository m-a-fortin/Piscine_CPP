/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:39:46 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/25 18:23:56 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(const ClapTrap&);
	virtual	~ClapTrap();
	virtual void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
protected:
	std::string	name;
	int			hp;
	int			ep;
	int			ad;
};
