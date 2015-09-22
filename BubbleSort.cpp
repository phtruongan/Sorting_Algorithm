#include "BubbleSort.h"



CBubbleSort::CBubbleSort()
{
}

void CBubbleSort::swap(double *first, double *second)
{
	double temp = *first;
	*first = *second;
	*second = temp;
}

std::vector<double> CBubbleSort::run(std::vector<double> sort_array)
{
	for (int i = sort_array.size()-1; i >= 0 ; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (sort_array.at(j) > sort_array.at(j+1))
			{
				swap(&sort_array.at(j), &sort_array.at(j+1));
			}
		}
	}
	return sort_array;
}


CBubbleSort::~CBubbleSort()
{
}
