/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:01:11 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/18 16:34:17 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.tpp"

#define MAX_VAL 750
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
	test3[0] = 0;
	test3[1] = 1;
	test3[3] = 3;
	test3[4] = 4;
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
	std::cout << "\n\nTESTING WITH EVAL MAIN\n";
	   Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
