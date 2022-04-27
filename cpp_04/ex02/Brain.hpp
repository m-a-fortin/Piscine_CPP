/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:54:34 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/27 10:56:34 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Brain
{
public:
	Brain();
	Brain(const Brain&);
	Brain& operator=(const Brain&);
	~Brain();
	std::string	ideas[100];
};
