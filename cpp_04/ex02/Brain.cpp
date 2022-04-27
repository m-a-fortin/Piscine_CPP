/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:55:01 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/27 11:47:25 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& other){
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& rhs){
	std::cout << "Brain assigment operator called" << std::endl;
	for(int i = 0; i < 100; i++){
		this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}
