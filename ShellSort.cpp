#include "ShellSort.h"



CShellSort::CShellSort()
{
}

std::vector<double> CShellSort::run(std::vector<double> sort_array)
{
	// gap sequence of Marcin Ciura 2001. Reference: The best increment for the Average Case of ShellSort
	std::vector<int> gaps = { 701, 301, 132, 57, 23, 10, 4, 1 };

	// scan through all gaps
	for (int i = 0; i < gaps.size(); i++)
	{
		// insertion sort for each gap
		for (int j = gaps.at(i); j < sort_array.size(); j++)
		{
			
			double temp = sort_array.at(j);			// keep value of the end of sequence of the gap
			int t = 0;

			for (t = j; t >= gaps.at(i) && sort_array.at(t - gaps.at(i)) > temp; t -= gaps.at(i))
			{
				// insertion process for swap the number if it greater than the considered number
				sort_array.at(t) = sort_array.at(t-gaps.at(i));
			}
			sort_array.at(t) = temp;
		}
	}

	return sort_array;
}

CShellSort::~CShellSort()
{
}
