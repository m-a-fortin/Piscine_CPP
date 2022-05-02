/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:17:10 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 09:50:49 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat&);
	Cat& operator=(const Cat&);
	virtual ~Cat();
	virtual void	makeSound() const;
	virtual std::string	getType() const;
};
