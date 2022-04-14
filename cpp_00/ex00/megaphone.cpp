/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:05:04 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/13 15:06:49 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv){
	if (argc <= 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++){
		std::string lower = argv[i];
		for(std::string::iterator it=lower.begin(); it != lower.end(); ++it)
			std::cout << (char)toupper(*it);
	}
	std::cout << std::endl;
	return (0);
}
