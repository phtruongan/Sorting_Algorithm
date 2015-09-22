#include "QuickSort.h"



CQuickSort::CQuickSort()
{
}

void CQuickSort::swap(double *first, double *second)
{
	double temp;
	temp = *first;
	*first = *second;
	*second = temp;
}

int CQuickSort::partition(std::vector<double>* sort_array, int lo, int hi)
{
	double pivot = sort_array->at(hi);
	int i = lo;
	// run from the low position to end - 1 (except the pivot) to swap numbers which are less than pivot into the current position from low increment.
	for (int j = lo; j < hi; j++)
	{
		if (sort_array->at(j) <= pivot)
		{
			swap(&sort_array->at(j), &sort_array->at(i));
			i++;
		}
	}
	// put the pivot into the position where the smaller numbers will be on the left and the bigger numbers will be on the right.
	swap(&sort_array->at(i), &sort_array->at(hi));
	return i;
}

void CQuickSort::run(std::vector<double>* sort_array,int lo, int hi)
{
	if (lo < hi)
	{
		int p = partition(sort_array, lo, hi);
		run(sort_array, lo, p - 1);
		run(sort_array, p + 1, hi);
	}
}

CQuickSort::~CQuickSort()
{
}
