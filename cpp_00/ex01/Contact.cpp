/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:22:55 by mafortin          #+#    #+#             */
/*   Updated: 2022/03/28 15:16:04 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::getContactInfo(std::string type)
{
	if (type == "first_name")
		return(this->first_name);
	if (type == "last_name")
		return (this->last_name);
	if (type == "nickname")
		return (this->nickname);
	if (type == "phone")
		return (this->phone);
	if (type == "secret")
		return (this->secret);
	else
		return ("Error\n");
}

void	Contact::setContactInfo(std::string type, std::string content)
{
	if (type == "first_name")
		first_name = content;
	if (type == "last_name")
		last_name = content;
	if (type == "nickname")
		nickname = content;
	if (type == "phone")
		phone = content;
	if (type == "secret")
		secret = content;
	return ;
}
