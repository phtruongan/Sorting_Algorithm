#include "HeapSort.h"



CHeapSort::CHeapSort()
{
}

void CHeapSort::swap(double* first, double* second)
{
	double temp = *first;
	*first = *second;
	*second = temp;
}

void CHeapSort::heapify(std::vector<double>* sort_array)
{
	int count = sort_array->size();			// length of the array
	int start = (count - 1 - 1)/2;			// find the parrent of the last elements (count - 1) . Parent = floor [(index - 1)/2]
	while (start >= 0)
	{
		siftDown(sort_array, start, count - 1);
		start--;							// get back to the next node that has the same level or upper level
	}
}

void CHeapSort::siftDown(std::vector<double>* sort_array, int start, int end)
{
	// in siftDown procedure we swap between child and parent if parent is less than child

	int leftChild;							// index of left child of parent
	int swapIdx;							// index of node needed to swap
	int root = start;						// index of the node
	
	// go until the root does not have any child
	while (root*2 + 1 <= end)
	{
		leftChild = root * 2 + 1;
		swapIdx = root;
		if (sort_array->at(swapIdx) < sort_array->at(leftChild))
		{
			swapIdx = leftChild;
		}
		
		// if the rightChild exist
		if (leftChild +1  <= end && sort_array->at(swapIdx) < sort_array->at(leftChild+1))
		{
			swapIdx = leftChild + 1;
		}

		// if this node satisfy the heap property that parent is greater than its children
		if (swapIdx == root)
		{
			return;
		}
		else
		{
			swap(&sort_array->at(swapIdx), &sort_array->at(root));
			root = swapIdx;
		}
	}
}

std::vector<double> CHeapSort::run(std::vector<double> sort_array)
{
	// Construct heap tree
	//   iParent     = floor((i-1) / 2)
	//	iLeftChild = 2 * i + 1
	//  iRightChild = 2 * i + 2
	int end = sort_array.size() - 1;
	heapify(&sort_array);

	while (end > 0)
	{
		swap(&sort_array.at(0), &sort_array.at(end));		// swap the root with the leaf
		end--;												// get the largest number out of array by reduce the size of the array to end--
		siftDown(&sort_array, 0, end);						// move the root swapped by the leaf down to the right place which satisfy the heap property
	}
	return sort_array;
}

CHeapSort::~CHeapSort()
{
}
