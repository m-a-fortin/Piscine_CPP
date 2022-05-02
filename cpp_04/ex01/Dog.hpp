/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:17:10 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 10:27:10 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog&);
	Dog& operator=(const Dog&);
	virtual	~Dog();
	void	makeSound() const;
	virtual	std::string	getType() const;
	virtual void	giveIdea(char **argv);
	virtual void	printIdea() const;
private:
	Brain *brain;
};
