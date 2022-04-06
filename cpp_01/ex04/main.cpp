/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:05:16 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/06 14:59:18 by mafortin         ###   ########.fr       */
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
		std::cout << "Invalid file" << std::endl;
		return (NULL);
	}
	file.seekg(0, file.end);
	int	len = file.tellg();
	file.seekg(0, file.beg);
	char	*buf = new char [len + 1];
	file.read(buf, len);
	file.close();
	buf[len] = 0;
	return (buf);
}

std::string find_loop(const std::string str, const std::string s1, const std::string s2)
{
	std::size_t pos = 0;
	std::string	final;
	std::string::iterator it = str.begin(); 
	while ()
	{
		pos = str.find(s1, pos);
		if (pos != std::string::npos)
		{

		}
		else
		
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid # of arguments" << std::endl;
		return (1);
	}
	char *buf = get_text(argv);
	if (!buf)
		return (1);
	const std::string str = std::string(buf);
	const std::string s1 = std::string(argv[2]);
	const std::string s2 = std::string(argv[3]);
	std::string	final = find_loop(str, s1, s2);
	delete[] buf;
}