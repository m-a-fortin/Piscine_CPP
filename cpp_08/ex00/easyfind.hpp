/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 12:37:49 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/12 13:55:18 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
typename T::iterator easyfind(T& box, int elem){
	typename T::iterator it = box.begin();
	while (it != box.end()){
		if (*it == elem)
			return it;
		else
			it++;
	}
	return box.end();
}
