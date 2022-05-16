/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:49:06 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/16 19:02:51 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutanStack.hpp"

template<typename T>
MutanStack<T>&	MutanStack<T>::operator=(const MutanStack<T>& rhs){
			std::stack<T>operator=(rhs);
			return *this;
};
