/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:35:53 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/04 20:57:06 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#ifndef WEAPON_HPP
# define WEAPON_HPP
class Weapon
{
private:
	 std::string type;
public:
	const std::string&	getType();
	void		setType(std::string name);
	Weapon(std::string w_type);
};

#endif
