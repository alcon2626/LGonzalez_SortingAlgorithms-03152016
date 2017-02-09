#include "stdafx.h"
#include "Bubblesort.h"
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n);

Bubblesort::Bubblesort()
{
	int A[10] = { 6,10,13,5,8,3,2,25,4,11 };
	cout << "Bubble sort" << endl;
	cout << "======Original======" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	int lenght = 10;
	bubbleSort(A, lenght);
	cout << "=====Sorted===== " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	cout << endl;
}
void bubbleSort(int arr[], int n) {
	bool swapped = true;
	int j = 0;
	int tmp;
	while (swapped) {
		swapped = false;
		j++;
		for (int i = 0; i < n - j; i++) {
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swapped = true;
			}
		}
	}
}

Bubblesort::~Bubblesort()
{
}
