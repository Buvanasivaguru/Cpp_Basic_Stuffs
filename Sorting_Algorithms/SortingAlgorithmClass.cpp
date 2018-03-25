#include "SortingAlgorithmClass.h"

SortingAlgorithmClass::SortingAlgorithmClass()
{
}


SortingAlgorithmClass::~SortingAlgorithmClass()
{
}

void SortingAlgorithmClass::swap(int * a, int * b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

void SortingAlgorithmClass::printsortedArray(int * inputArray, int arraySize)
{
	//print the array status
	for (int i = 0; i < arraySize; i++)
	{
		cout << inputArray[i] << " | ";
	}
	cout << endl;
}

//Bubble Sort

int * SortingAlgorithmClass::BubbleSort(int * inputArray, int arraySize)
{
	int i, j;
	bool swapped;

	for (i = 0; i < arraySize - 1; i++)
	{
		swapped = false;
		cout << "Iteration " << i << " Starts" << endl << "-----------------------" << endl;
		for (j = 0; j < arraySize - i - 1; j++)
		{
			if (inputArray[j] > inputArray[j + 1])
			{
				swap(&inputArray[j], &inputArray[j + 1]);
				swapped = true;
			}
			printsortedArray(inputArray, arraySize);
		}
		cout << "Iteration End" << endl << "-----------------------" << endl;

		if (swapped == false)
			break;
	}

	cout << '\n' << "Bubble Sorted Array is..." << endl;
	printsortedArray(inputArray, arraySize);

	return inputArray;
}

//Selection Sort

int * SortingAlgorithmClass::SelectionSort(int * inputArray, int arraySize)
{
	int i, j, minValue;

	for (i = 0; i < arraySize - 1; i++)
	{
		minValue = i;
		cout << "Iteration " << i << " Starts" << endl << "-----------------------" << endl;
		for (j = i + 1; j < arraySize; j++) 
		{
			if (inputArray[j] < inputArray[minValue])
				minValue = j;
			printsortedArray(inputArray, arraySize);
		}

		swap(&inputArray[minValue], &inputArray[i]);
		printsortedArray(inputArray, arraySize);
		cout << "Iteration End" << endl << "-----------------------" << endl;

	}

	cout << '\n' << "Selection Sorted Array is..." << endl;
	printsortedArray(inputArray, arraySize);

	return inputArray;
}

int * SortingAlgorithmClass::InsertionSort(int * inputArray, int arraySize)
{
	int i, j;
	
	for (i = 1; i < arraySize; i++)
	{
		cout << "Iteration " << i-1 << " Starts" << endl << "-----------------------" << endl;
		j = i;
		while (j > 0 && inputArray[j] < inputArray[j - 1])
		{
			swap(&inputArray[j], &inputArray[j - 1]);
			j--;
			printsortedArray(inputArray, arraySize);
		}
		printsortedArray(inputArray, arraySize);
		cout << "Iteration End" << endl << "-----------------------" << endl;
	}
	cout << '\n' << "Insertion Sorted Array is..." << endl;
	printsortedArray(inputArray, arraySize);

	return inputArray;
}

int * SortingAlgorithmClass::MergeSort(int * inputArray, int first, int last)
{
	if (first < last)
	{
		int middle = (first + last) / 2;
		MergeSort(inputArray, first, middle);
		MergeSort(inputArray, middle + 1, last);
		Merge(inputArray, first, middle, last);
	}
	return inputArray;
}
void SortingAlgorithmClass::Merge(int * inputArray, int first, int middle, int last)
{
	int i, j, k;
	i = first;
	j = middle + 1;
	k = 0;
	int temp[50];

	while (i <= middle && j <= last) 
	{
		if (inputArray[i] < inputArray[j])
		{
			temp[k] = inputArray[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = inputArray[j];
			j++;
			k++;
		}
	}
	while (i <= middle)
	{
		temp[k] = inputArray[i];
		i++; k++;
	}
	while (j <= last)
	{
		temp[k] = inputArray[j];
		j++; k++;
	}
	for (i = first; i <= last; i++)
	{
		inputArray[i] = temp[i - first];
	}
	cout << '\n' << "Merge Sorted Array is..." << endl;
	printsortedArray(inputArray, last + 1);
}
int *SortingAlgorithmClass::QuickSort(int * inputArray, int left, int right)		// pivot Selection : last element
{
	if (left < right) 
	{
		int pivot_index = Partition(inputArray, left, right);

		QuickSort(inputArray, left, pivot_index - 1);
		QuickSort(inputArray, pivot_index + 1, right);
	}
	return inputArray;
}

int SortingAlgorithmClass::Partition(int * inputArray, int left, int right)
{
	int j, i = left - 1;
	int pivot = inputArray[right];

	for (j = left; j < right; j++)
	{
		if (inputArray[j] <= pivot)
		{
			i++;
			swap(&inputArray[i], &inputArray[j]);
		}
	}
	swap(&inputArray[i + 1], &inputArray[j]);
	//printsortedArray(inputArray, right + 1);
	return (i + 1);
}
