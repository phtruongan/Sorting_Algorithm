////////////////////////////////////////////////////////////////////////////////
/////////		Name: Truong-An PHAM
/////////		Purpose: Implementing the HeapSort algorithm in C++
////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <vector>
class CHeapSort
{
public:
	CHeapSort();
	static void swap(double * first, double * second);
	static void heapify(std::vector<double>* sort_array);
	static void siftDown(std::vector<double>* sort_array,int start, int end);
	static std::vector<double> run(std::vector<double> sort_array);
	~CHeapSort();
};

