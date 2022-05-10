/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:01:11 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/10 17:26:13 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.tpp"

int	main( void ){

	Array<std::string>	test(10);
	Array<std::string> test2 = test;


	std::cout << "DEEP COPY + ASSIGNING VALUE TESTING\n";
	std::cout << "SETTING INDEX 0 OF TEST TO \"test\" AND PRITING VALUE" << std::endl;
	test.setValue(0, "test");
	std::cout << test[0] << std::endl;
	std::cout << "COPY OF TEST (test2). SETTING INDEX 0 TO \"change\" AND PRINTING IT\n";
	test2.setValue(0, "change");
	std::cout << test2[0] << std::endl;
	std::cout << "PRINTING VALUE OF ORIGINAL TEST AFTER CHANGE OF TEST2 :\n";
	std::cout << test[0] << std::endl;
	std::cout << "--------------------------------------------------------\n";


	std::cout << "TESTING WITH INT VALUE\n";
	Array<int> test3(5);
	test3.setValue(0, 0);
	test3.setValue(1, 1);
	test3.setValue(2, 2);
	test3.setValue(3, 3);
	test3.setValue(4, 4);
	std::cout << "SETTING VALUE 0,1,2,3,4 TO THE NEW ARRAY OF INT AND PRITING VALUE\n";
	std::cout << test3[0] << "\n" << test3[1] << "\n" << test3[2] << "\n" << test3[3] << "\n" << test3[4] << std::endl;
	std::cout << "--------------------------------------------------------\n";

	std::cout << "TESTING TRY CATCH WITH OUT OF BOUNCE (SHOULD THROW EXCEPTION)\n";
	try{
		test[11];
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		test2[11];
	}
	catch (std::exception& d){
		std::cout << d.what();
	}

}
