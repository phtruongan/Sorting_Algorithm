#include <iostream>
#include <fstream>
#include <string>
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "QuickSort.h"
#include "BubbleSort.h"
#include "HeapSort.h"
#include "MergeSort.h"
#include "ShellSort.h"
using namespace std;

int main()
{
	string filename = "test.txt";
	string number;
	vector<double> sort;
	int flag = 0;
	int idx = 0;
	ifstream inFile(filename);
	while (!inFile.eof())
	{
		inFile >> number;
		sort.push_back(atof(number.c_str()));
	}

	std::vector<double> sorted = CShellSort::run(sort);

	for (int i = 0; i < sorted.size(); i++)
	{
		cout << sorted.at(i) << " ; ";
	}
}