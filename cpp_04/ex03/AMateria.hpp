/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:13:11 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 12:05:49 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "ICharacter.hpp"

class AMateria
{	
public:
	AMateria();
	AMateria(const AMateria&);
	AMateria& operator=(const AMateria&);
	virtual ~AMateria();
	AMateria(const std::string& type);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
protected:
	std::string type;
};
