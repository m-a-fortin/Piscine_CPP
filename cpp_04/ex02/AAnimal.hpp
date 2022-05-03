/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:09:26 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/03 14:59:40 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

//ABSTRACT CLASS
class AAnimal
{
public:
	AAnimal();
	AAnimal(const AAnimal&);
	AAnimal& operator=(const AAnimal&);
	AAnimal(std::string type);
	virtual ~AAnimal();
	virtual	void	makeSound() const = 0;
	virtual std::string	getType() const;
protected:
	std::string type;
};
