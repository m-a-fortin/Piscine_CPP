/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:05:16 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/06 15:19:58 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

char *get_text(char **argv)
{
	std::fstream	file;
	file.open(argv[1]);
	if (!file.is_open())
	{
		file.close();
		std::cout << "Error:\n" << "Invalid file" << std::endl;
		return (NULL);
	}
	file.seekg(0, file.end);
	long	len = file.tellg();
	file.seekg(0, file.beg);
	char	*buf = new char [len + 1];
	file.read(buf, len);
	file.close();
	buf[len] = 0;
	return (buf);
}

void	replace_loop(std::string *str, const std::string s1, const std::string s2)
{
	std::size_t	pos = str->find(s1, 0);
	while (pos != std::string::npos)
	{
		str->erase(pos, s1.length());
		str->insert(pos, s2);
		pos += s2.length();
		pos =str->find(s1, pos);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error\nInvalid # of arguments" << std::endl;
		return (1);
	}
	if (!argv[2][0] || !argv[3][0])
	{
		std::cout << "Error\nCannot take empty string as argument" << std::endl;
		return (1);
	}
	char *buf = get_text(argv);
	if (!buf)
		return (1);
	std::string *str = new std::string;
	*str = std::string(buf);
	delete[] buf;
	const std::string s1 = std::string(argv[2]);
	const std::string s2 = std::string(argv[3]);
	replace_loop(str, s1, s2);
	std::string	name = std::string(argv[1]) + ".replace";
	std::fstream file;
	file.open(name.c_str(), std::fstream::out);
	if (!file.is_open())
	{
		std::cout << "Error when trying to create file named : " << name << std::endl;
		return (1);
	}
	file.write(str->c_str(), (long)str->length());
	file.close();
	delete str;
}
