#include "stdafx.h"
#include "Selectionsort.h"
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n);
Selectionsort::Selectionsort()
{
	int A[10] = { 6,10,13,5,8,3,2,25,4,11 };
	cout << "Selection sort" << endl;
	cout << "======Original======" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	int lenght = 10;
	selectionSort(A, lenght);
	cout << "=====Sorted===== " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	cout << endl;
}
void selectionSort(int arr[], int n) {
	int i, j, minIndex, tmp;
	for (i = 0; i < n - 1; i++) {
		minIndex = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[minIndex])
				minIndex = j;
		if (minIndex != i) {
			tmp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = tmp;
		}
	}
}

Selectionsort::~Selectionsort()
{
}
