#include "SelectionSort.h"



CSelectionSort::CSelectionSort()
{
}

void CSelectionSort::swap(double *first, double *second)
{
	double temp;
	temp = *first;
	*first = *second;
	*second = temp;
}

std::vector<double> CSelectionSort::run(std::vector<double> sort_array)
{
	int minIdx;
	// run from the beginning of the array to the end of the array
	for (int i = 0; i < sort_array.size(); i++)
	{
		minIdx = i;
		// pick the minimum index from the remainning part of the array 
		for (int j = i+1; j < sort_array.size(); j++)
		{
			if (sort_array.at(j) < sort_array.at(minIdx))
			{
				minIdx = j;
			}
		}

		if (i != minIdx)
		{
			//swap the first position of unsorted array with the minimum element by its index 
			swap(&sort_array.at(i), &sort_array.at(minIdx));
		}
	}
	return sort_array;
}

CSelectionSort::~CSelectionSort()
{
}
