
#include <iostream>
#include "declare.hpp"
#include <string>


int	main( void ){
		int a = 0;
		int b = 42;
		std::string c = "petit";
		std::string d = "tres grand";
		float e = 0.5f;
		float f = 0.5f;
	{
		std::cout << "AVANT SWAP\n";
		std::cout << "A: " << a << "\nB: " << b << "\nC: " << c << "\nD: " << d << "\nE: " << e << "\nF: " << f << std::endl;
		std::cout << "\nAPRES SWAP\n";
		::swap(a, b);
		::swap(c, d);
		::swap(e, f);
		std::cout << "A: " << a << "\nB: " << b << "\nC: " << c << "\nD: " << d << "\nE: " << e << "\nF: " << f << std::endl;
	}
	std::cout << "------------------------------------------------------------\n";
	{
		std::cout << "MAX entre A: " << a << " et B: " << b << "\nResultat = " << ::max(a, b) << std::endl;
		std::cout << "MAX entre C: " << c << " et D: " << d << "\nResultat = " << ::max(c, d) << std::endl;
		std::cout << "MAX entre E: " << e << " et F: " << f << "\nResultat = " << ::max(e, f) << std::endl;
	}
	std::cout << "------------------------------------------------------------\n";
	{
		std::cout << "MIN entre A: " << a << " et B: " << b << "\nResultat = " << ::min(a, b) << std::endl;
		std::cout << "MIN  entre C: " << c << " et D: " << d << "\nResultat = " << ::min(c, d) << std::endl;
		std::cout << "MIN entre E: " << e << " et F: " << f << "\nResultat = " << ::min(e, f) << std::endl;
	}
}
