/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:12:39 by mafortin          #+#    #+#             */
/*   Updated: 2022/03/22 15:21:58 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
	public:
		PhoneBook();
		void	add_contact();
		void	search_contact();
	private:
		void	show_search(std::string str);
		int			contact_nb;
		std::string	add_input(std::string msg);
		int			old_contact;
		Contact	contact[8];
};

#endif
