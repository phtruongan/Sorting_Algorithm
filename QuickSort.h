////////////////////////////////////////////////////////////////////////////////
/////////		Name: Truong-An PHAM
/////////		Purpose: Implementing the QuickSort algorithm in C++
////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <vector>
class CQuickSort
{
public:
	CQuickSort();
	static void swap(double *first, double *second);
	static int partition(std::vector<double>* sort_array, int lo, int hi);
	static void run(std::vector<double> *sort_array, int lo, int hi);
	~CQuickSort();
};

