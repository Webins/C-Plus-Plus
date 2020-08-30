/*
 * Array.hpp
 *
 *  Created on: 22 ene. 2020
 *      Author: webins
 */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <iostream>

template <typename T, int N>
class Array{
	int size {N};
	T values[N];
	friend std::ostream &operator<<(std::ostream &os, const Array<T, N> &arr){
		os << "[";
		for(const auto &val : arr.values) os << val << " ";
		os << "]" << std::endl;
		return os;
	}
public:
	Array(void) = default;
	Array(T init_val){
		for(auto &item: values) item = init_val;
	}
	void fill(T val){
		for(auto &item: values) item = val;
	}
	int getSize() const { return size; }

	T &operator[](int index){
		return values[index];
	}
};







#endif /* ARRAY_HPP_ */
