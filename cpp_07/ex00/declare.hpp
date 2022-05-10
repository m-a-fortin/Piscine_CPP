
#pragma once
#include <iostream>

template< typename T >
void	swap(T& x, T& y){
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template< typename T >
const T&	max(const T& x, const T& y){
	if (x > y)
		return x;
	else
		return y;
}

template< typename T >
const T&	min(const T& x, const T& y){
	if (x < y)
		return x;
	else
		return y;
}
