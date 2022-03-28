/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:25:01 by mafortin          #+#    #+#             */
/*   Updated: 2022/03/28 11:38:52 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <unistd.h>

int	main(void)
{
	PhoneBook	phonebook;
	int			added = 0;

	std::cout << "WELCOME TO YOUR AWESOME PHONEBOOK" << std::endl;
	std::cout << "_________________________________\n" << std::endl;
	while (1)
	{
		std::string user_input;
		std::cout << "YOUR OPTIONS ARE :\nADD, SEARCH or EXIT\n";
		std::getline(std::cin, user_input);
		if (user_input == "EXIT")
		{
			std::cout << "Deleting all contacts" << std::flush;
			sleep(2);
			std::cout << ". " << std::flush;
			sleep(1);
			std::cout << ". " << std::flush;
			sleep(1);
			std::cout << "." << std::flush;
			sleep(1);
			std::cout << "\nCongratulations you lost all your contacts !\n" << std::flush;
			sleep(2);
			std::cout << "Exiting" << std::endl;
			sleep(1);
			std::cout << "Job 1, './phonebook' terminated by signal SIGSEGV (Address boundary error)" << std::endl;
			sleep(3);
			std::cout << "Just kidding. Bye !" << std::endl;
			return (0);
		}
		if (user_input == "ADD")
		{
			std::cout << "\nPlease enter contact informations\n" << std::endl;
			phonebook.add_contact();
			std::cout << "\nContact added !" << std::endl;
			added = 1;
		}
		if (user_input == "SEARCH")
		{
			if (added == 0)
				std::cout << "   Phonebook empty. Go out and make some friends !" << std::endl;
			else
				std::cout << "            List of all your \"friends\"" << std::endl;
			phonebook.search_contact();
		}
		std::cout << "_________________________________\n" << std::endl;
		}
	return (0);
}
