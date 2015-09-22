#include "InsertionSort.h"



CInsertionSort::CInsertionSort()
{
}

std::vector<double> CInsertionSort::run(std::vector<double> sort_array)
{
	double temp=0;
	int j;
	for (int i = 1; i < sort_array.size();i++)
	{
		j = i;
		while (j > 0 && sort_array.at(j-1) > sort_array.at(j))
		{
			temp = sort_array.at(j-1);
			sort_array.at(j-1) = sort_array.at(j);
			sort_array.at(j) = temp;
			j--;
		}
	}
	return sort_array;
}

CInsertionSort::~CInsertionSort()
{
}
