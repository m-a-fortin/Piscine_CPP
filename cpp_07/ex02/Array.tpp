/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:04:02 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/10 17:16:31 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
class Array
{
public:
	Array(){
		this->_array = new T[0]();
		this->_size = 0;
		std::cout << "DEFAULT" << std::endl;
	};
	Array(unsigned int n){
		this->_array = new T[n];
		this->_size = n;
	};
	Array(const Array& other){
		this->_array = NULL;
		*this = other;
	};
	Array& operator=(const Array& rhs){
		delete[] this->_array;
		this->_array = cpyValue(rhs);
		this->_size = rhs.size();
		return *this;
		};
	~Array(){delete[] _array;};
	T	*cpyValue(const Array& original){
		T	*cpy = new T[original.size()];
		for (unsigned int i = 0; i < original.size(); i++){
			cpy[i] = original._array[i];
		}
		return cpy;
	};
	unsigned	int	size() const{
		return this->_size;
	}
	void	setValue(unsigned int index, T value){
		this->_array[index] = value;
	}
	class OutOfBounce : public std::exception
	{
		public:
			virtual const char* what() const throw(){
				return "Error\nIndex is out of bounce";
			};
	};
	T	operator[](std::size_t index){
		if (index >= this->_size)
			throw OutOfBounce();
		else
			return this->_array[index];
		}
private:
	T*	_array;
	unsigned int	_size;
};

