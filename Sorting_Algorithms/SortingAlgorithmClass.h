#pragma once

#include "stdafx.h"
#include <iostream>

using namespace std;

class SortingAlgorithmClass
{
public:
	SortingAlgorithmClass();
	~SortingAlgorithmClass();
	void swap(int * a, int * b); void printsortedArray(int * inputArray, int arraySize);
	int * BubbleSort(int * inputArray, int arraySize);
	int * SelectionSort(int *inputArray, int arraySize);
	int * InsertionSort(int * inputArray, int arraySize);
	int * MergeSort(int * inputArray, int first, int last);
	void Merge(int *inputArray, int first, int middle, int last);
	int * QuickSort(int * intputArray, int left,int right);
	int Partition(int * inputArray, int left, int right);
};