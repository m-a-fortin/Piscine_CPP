/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:39:46 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/20 15:48:14 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(const ClapTrap&);
	~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	int		getStat(std::string type) const;
	void	setStat(std::string type, int nb);
	void	setName(std::string name);
	std::string	getName() const;
private:
	std::string	name;
	int			hp;
	int			ep;
	int			ad;
};
