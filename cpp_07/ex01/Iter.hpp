
#pragma once
#include <iostream>

//DANS LE TEST DE L'EVAL, ON NOUS FORCE A METTRE T& COMME CONST, MAIS CA VA A L'ENCONTRE DU ITER.
//CHANGER T& COMME CONST SEULEMENT POUR LE MAIN DE L'EVALUATION.
template<typename T>
void	iter(T* adress, unsigned int size, void f(T&)){
	for (unsigned int i = 0; i < size; i++){
		f(adress[i]);
	}
}

template<typename T>
void	funct_print(T& arg){
	std::cout << arg << std::endl;
}

template<typename T>
void	funct_add(T& arg){
	arg++;
}
