/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:23:52 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/10 14:07:26 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <string>

int	main(void){
	std::string tab[3] = {"string 1", "string 2", "string 3"};
	std::cout << "PRINTING ARRAY OF STD::STRING\n";
	::iter(tab, 3, funct_print);
	int	tab2[10] = {0, 1, 2, 3, 4 , 5, 6, 7, 8, 9};
	std::cout << "\nPRINTING ARRAY OF INT\n";
	::iter(tab2, 10, funct_print);
	std::cout << "INCREASING BY 1 EACH ELEMENT OF ARRAY OF INT\n";
	::iter(tab2, 10, funct_add);
	std::cout << "PRINTING RESULT\n";
	::iter(tab2, 10, funct_print);
}
