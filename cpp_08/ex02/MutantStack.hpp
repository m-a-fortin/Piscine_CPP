/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:43:29 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/17 12:47:01 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{

	public:
		MutantStack() : std::stack<T>(){};
		~MutantStack(){};
		MutantStack(const MutantStack& other){
			*this = other;
		};
		MutantStack<T>&	operator=(MutantStack<T> const& rhs){
			std::stack<T>::operator=(rhs);
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(){
			return std::stack<T>::c.begin();
		};
		iterator end(){
			return std::stack<T>::c.end();
		}
		
};
