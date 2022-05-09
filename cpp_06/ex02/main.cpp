/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:51:46 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/09 17:04:42 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ABC.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>

Base * generate(void){

	int random;

	srand(static_cast<unsigned int>(time(NULL)));
	random = rand() % 3;
	if (random == 1)
		return new A;
	else if (random == 2)
		return new B;
	else
		return new C;
}

void identify(Base* p){
	Base* test;

	test = dynamic_cast<A *>(p);
	if (test != NULL)
		std::cout << "A" << std::endl;
	test = dynamic_cast<B *>(p);
	if (test != NULL)
		std::cout << "B" << std::endl;
	test = dynamic_cast<C *>(p);
	if (test != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p){

	try{
		Base& test = dynamic_cast<A&>(p);
		static_cast<void>(test);
		std::cout << "A" << std::endl;
		return;
	}
	catch(std::exception e){}
	try{
		Base& test = dynamic_cast<B&>(p);
		static_cast<void>(test);
		std::cout << "B" << std::endl;
		return;
	}
	catch(std::exception e){}
	try{
		Base& test = dynamic_cast<C&>(p);
		static_cast<void>(test);
		std::cout << "C" << std::endl;
		return;
	}
	catch(std::exception e){}
}

int	main(void){
	Base* test = generate();
 	Base&	test2 = *test;
	std::cout << "TESTING BASE*" << std::endl;
	identify(test);
	std::cout << "\nTESTING BASE&(should be the same as *)" << std::endl;
	identify(test2);
	delete test;
}
