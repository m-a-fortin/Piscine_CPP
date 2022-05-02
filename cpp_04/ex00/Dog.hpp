/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:17:10 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 09:50:56 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog&);
	Dog& operator=(const Dog&);
	virtual	~Dog();
	void	makeSound() const;
	virtual	std::string	getType() const;
};
