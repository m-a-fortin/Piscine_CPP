/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:22:12 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 14:50:57 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <string>
#include <vector>

class Character : public ICharacter
{
public:
	Character();
	Character(const Character&);
	Character(const std::string& name);
	Character& operator=(const Character&);
	virtual ~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
private:
	std::string name;
	AMateria* inventory[4];
	int		isize;
	AMateria*	garbage;
	bool		full;
};
