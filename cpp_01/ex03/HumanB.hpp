/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:05:40 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/06 14:05:42 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

class HumanB
{
public:
	HumanB (const std::string& name);
	void	attack(void);
	void	setWeapon(Weapon& weapon);
private:
	Weapon *weapon;
	std::string	name;
};
