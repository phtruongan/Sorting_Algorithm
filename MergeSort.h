////////////////////////////////////////////////////////////////////////////////
/////////		Name: Truong-An PHAM
/////////		Purpose: Implementing the MergeSort algorithm in C++
////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <vector>
class CMergeSort
{
public:
	CMergeSort();
	static void copyArray(std::vector<double>* inputA, int iBegin, int iEnd, std::vector<double>* outputB);						// copy sorted parts back to the input array A
	static void topDownMerge(std::vector<double>* inputA, int iBegin, int iMiddle, int iEnd, std::vector<double>* outputB);		// split and merge the array
	static void topDownSplitMerge(std::vector<double>* inputA, int iBegin, int iEnd, std::vector<double>* outputB);				// main running function
	static std::vector<double> run(std::vector<double> inputA);
	~CMergeSort();
};

