/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:05:31 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/06 14:05:34 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

class HumanA
{
public:
	HumanA(const std::string& name, Weapon& type);
	void	attack(void);
private:
	Weapon& weapon;
	std::string	name;
};
