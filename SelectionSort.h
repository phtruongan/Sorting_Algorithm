////////////////////////////////////////////////////////////////////////////////
/////////		Name: Truong-An PHAM
/////////		Purpose: Implementing the SelectionSort algorithm in C++
////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <vector>
class CSelectionSort
{
public:
	CSelectionSort();
	static void swap(double *first, double *second);
	static std::vector<double> run(std::vector<double> sort_array);
	~CSelectionSort();
};

