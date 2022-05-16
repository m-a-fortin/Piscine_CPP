/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:31:11 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/16 17:35:24 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdlib.h>

Span::Span(): N(0){
	storage.reserve(N);
	this->nb_value = 0;
}

Span::~Span(){}

Span::Span(const Span& cpy){
	*this = cpy;
}

Span::Span(unsigned int N) : N(N){
	storage.reserve(N);
	nb_value = 0;
}

Span&	Span::operator=(const Span& rhs){
	this->N = rhs.N;
	this->storage = rhs.storage;
	this->nb_value = rhs.nb_value;
	return *this;
}

const	char*	Span::StorageIsFull::what() const throw(){
		return "Error, storage is full";

}

const	char*	Span::NotEnoughValue::what() const throw(){
		return "Error, not enough value";

}

void	Span::addNumber(const int& nb){
	if (nb_value < N)
	{
		this->storage.push_back(nb);
		nb_value++;
	}
	else
		throw StorageIsFull();
}

unsigned int	Span::shortestSpan() const{
	int	dif_save = INT_MAX;
	int	dif;
	std::vector<const int>::iterator	cur;
	cur = storage.begin();
	if (storage.size() <= 1)
		throw NotEnoughValue();
	while (true){
		dif = *cur;
		cur++;
		if (cur == storage.end())
			break ;
		dif = abs(dif - *cur);
		if (dif < dif_save)
			dif_save = dif;
	}
	return static_cast<unsigned int>(dif_save);
}

unsigned int		Span::longestSpan() const{
	int	dif_save = 0;
	int	dif;
	std::vector<const int>::iterator	cur;
	cur = storage.begin();
	if (storage.size() <= 1)
		throw NotEnoughValue();
	while (true){
		dif = *cur;
		cur++;
		if (cur == storage.end())
			break ;
		dif = abs(dif - *cur);
		if (dif > dif_save)
			dif_save = dif;
	}
	return static_cast<unsigned int>(dif_save);
}

