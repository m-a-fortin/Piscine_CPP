/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:22:42 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/06 14:53:43 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>

int	main(int argc, char **argv){
	if (argc == 1){
		std::cout << "Error\nNeed 1 argument" << std::endl;
		return 1;
	}
	const std::string lit(argv[1]);
	Converter conv(lit);
	conv.setType();
	std::cout << conv.getType() << std::endl;
	conv.doConversion();
	conv.showConversion();
}
