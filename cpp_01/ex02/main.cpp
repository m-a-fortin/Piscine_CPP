/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:41:09 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/01 18:18:32 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	
	std::cout << "Memory address of the string variable = " << &str << "\nMemory address held by stringPTR = " << stringPTR << "\nMemory address held by stringREF = " << &stringREF << std::endl;
	std::cout << "Value of the string variable = " << str << "\nValue pointed to by stringPTR = " << *stringPTR << "\nValue pointed to by stringREF = " << stringREF << std::endl;
}
