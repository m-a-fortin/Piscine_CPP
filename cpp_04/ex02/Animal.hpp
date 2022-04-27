/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:09:26 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/27 14:17:36 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Animal
{
public:
	Animal();
	Animal(const Animal&);
	Animal& operator=(const Animal&);
	virtual ~Animal();
	virtual	void	makeSound() const = 0;
	virtual std::string	getType() const = 0;
	virtual void	giveIdea(char **argv) = 0;
	virtual void	printIdea() const = 0;
protected:
	std::string type;
};
