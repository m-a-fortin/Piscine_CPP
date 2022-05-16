/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:43:29 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/16 19:04:46 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>

template<typename T>
class MutanStack : public std::stack<T>{

	public:
		MutanStack() : std::stack<T>(){};
		~MutanStack();
		MutanStack(const MutanStack& other){
			*this = other;
		};
		MutanStack&	operator=(const MutanStack& rhs);
		
};
