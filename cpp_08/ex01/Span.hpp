/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:57:39 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/16 17:19:45 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <iostream>

class Span
{
public:
	Span();
	~Span();
	Span(const Span&);
	Span&	operator=(const Span&);
	Span(unsigned int N);
	void	addNumber(const int& nb);
	unsigned int		shortestSpan() const;
	unsigned int		longestSpan() const;
	class	StorageIsFull : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	class	NotEnoughValue : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	template<typename T>
	void	addNumber(T beg, T end){
		while (beg != end){
			nb_value++;
			this->storage.push_back(*beg);
			beg++;
			if (nb_value >= N && beg != end)
				throw StorageIsFull();
		}
	}
private:
	unsigned int		N;
	std::vector<int>	storage;
	unsigned int		nb_value;
};
