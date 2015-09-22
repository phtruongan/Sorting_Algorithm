////////////////////////////////////////////////////////////////////////////////
/////////		Name: Truong-An PHAM
/////////		Purpose: Implementing the Bubble Sort algorithm in C++
////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <vector>
class CBubbleSort
{
public:
	CBubbleSort();
	static void swap(double *first, double *second);
	static std::vector<double> run(std::vector<double> sort_array);
	~CBubbleSort();
};

