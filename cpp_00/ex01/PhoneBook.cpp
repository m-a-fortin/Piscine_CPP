/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:59:45 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/01 18:07:04 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstdlib>
#include <unistd.h>

//Constructeur, init nb of contact and the oldest contact to 0
PhoneBook::PhoneBook(void)
{
	contact_nb = 0;
	old_contact = 0;
}
//Gets input from user and return a string. Loop until the input is not empty
std::string	PhoneBook::add_input(std::string msg)
{
	std::string str;
	while (true)
	{
		std::cout << msg << std::endl;
		std::getline(std::cin, str);
		if (str.empty())
			std::cout << "Contact field cannot be empty. Please enter value" << std::endl;
		else
			break ;
	}
	return (str);
}

void	PhoneBook::add_contact()
{
	int	index;

	contact_nb++;
	if (contact_nb > 8)
	{
		std::cout << "! Warning !\nYour phonebook is full. The next contact added will replace your oldest contact\n" << std::endl;
		contact_nb = 8;
		index = old_contact;
		old_contact++;
		if (old_contact >= 8)
			old_contact = 0;
	}
	else
		index = contact_nb - 1;
	contact[index].setContactInfo("first_name", add_input("Contact First Name :"));
	contact[index].setContactInfo("last_name", add_input("Contact Last Name :"));
	contact[index].setContactInfo("nickname", add_input("Contact Nickname :"));
	contact[index].setContactInfo("phone", add_input("Contact Phone Number :"));
	contact[index].setContactInfo("secret", add_input("Contact Darkest Secret :"));
}

void	PhoneBook::show_search(std::string str)
{
	unsigned long	len = str.size();
	int	dif = 10 - (int)len;
	
	if (dif >= 0)
	{
		for(int	i = 0;i < dif ;i++)
			std::cout << ' ';
		std::cout << str;
	}
	else
	{
		std::string::iterator it = str.begin();
		for (int i = 0; i < 9; i++)
		{
			std::cout << *it;
			++it;
		}
		std::cout << '.';
	}
}

void	PhoneBook::search_contact()
{
	std::string	input;
	std::cout << "     Index|first name|last  name|  Nickname\n";
	for (int i = 0; i < contact_nb; i++)
	{
		std::cout << "         " << i + 1;
		std::cout << '|';
		show_search(contact[i].getContactInfo("first_name"));
		std::cout << '|';
		show_search(contact[i].getContactInfo("last_name"));
		std::cout << '|';
		show_search(contact[i].getContactInfo("nickname"));
		std::cout << std::endl;
	}
	if (contact_nb == 0)
		return ;
	while (true)
	{
		std::cout << "\nPlease enter a contact index" << std::endl;
		std::getline(std::cin, input);
		if (input == "EXIT")
			break ;
		const char *str = input.c_str();
		long	nb = std::atol(input.c_str());
		nb--;
		for (int i = 0; str[i]; i++)
		{
			if (isdigit(str[i]) == 0)
			{
				nb = -42;
				break ;
			}
		}
		if (nb < 0 || nb >= contact_nb)
			std::cout << "Nice try! Please enter a real index! or EXIT" << std::endl;
		else
		{
			std::cout << "Information of Contact Index # " << nb + 1 << std::endl;
			sleep(1);
			std::cout << "First Name: " << contact[nb].getContactInfo("first_name") << std::endl;
			sleep(1);
			std::cout << "Last Name: " << contact[nb].getContactInfo("last_name") << std::endl;
			sleep(1);
			std::cout << "Nickname: " << contact[nb].getContactInfo("nickname") << std::endl;
			sleep(1);
			std::cout << "Phonenumber: " << contact[nb].getContactInfo("phone") << std::endl;
			sleep(1);
			std::cout << "Darkest Secret (shh dont tell anyone): " << contact[nb].getContactInfo("secret") << "\n" << std::endl;
			sleep(1);
			break ;
		}
	}
}
