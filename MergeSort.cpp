#include "MergeSort.h"



CMergeSort::CMergeSort()
{
}

void CMergeSort::copyArray(std::vector<double>* inputA, int iBegin, int iEnd, std::vector<double>* outputB)
{
	for (int i = iBegin; i < iEnd; i++)
	{
		inputA->at(i) = outputB->at(i);
	}
}

void CMergeSort::topDownMerge(std::vector<double> * inputA, int iBegin, int iMiddle, int iEnd, std::vector<double> * outputB)
{
	// pick head for each array
	int i0 = iBegin;		// begin index of left half
	int i1 = iMiddle;		// begin index of right half
	for (int j = iBegin; j < iEnd; j++)
	{
		// right half is over or left half number is less than right half number
		if (i0 < iMiddle && (i1 >= iEnd || inputA->at(i0) <= inputA->at(i1)))
		{
			outputB->at(j) = inputA->at(i0);
			i0++;
		}
		else
		{
			outputB->at(j) = inputA->at(i1);
			i1++;
		}
	}
}

void CMergeSort::topDownSplitMerge(std::vector<double> * inputA, int iBegin, int iEnd, std::vector<double> * outputB)
{
	int iMiddle;			// for separating the array into two smaller array
	if (iEnd - iBegin < 2)	// the array has maximum 1 number
		return;
	iMiddle = (iEnd + iBegin) / 2;
	topDownSplitMerge(inputA, iBegin, iMiddle, outputB);		// left half
	topDownSplitMerge(inputA, iMiddle, iEnd, outputB);			// right half
	topDownMerge(inputA, iBegin, iMiddle, iEnd, outputB);		// merge two halves
	copyArray(inputA, iBegin, iEnd, outputB);
}

std::vector<double> CMergeSort::run(std::vector<double> inputA)
{
	std::vector<double>* outputB= new std::vector<double>(inputA);
	topDownSplitMerge(&inputA, 0, inputA.size(), outputB);
	return inputA;
}


CMergeSort::~CMergeSort()
{
}
