#include "stdafx.h"
#include "Insertionsort.h"
#include <iostream>
#include <vector>
using namespace std;
void insertionSort(int arr[], int length);

Insertionsort::Insertionsort()
{
	int A[10] = { 6,10,13,5,8,3,2,25,4,11 };
	cout << "Insertion sort" << endl;
	cout << "======Original======" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	int lenght = 10;
	insertionSort(A, lenght);
	cout << "=====Sorted===== " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	cout << endl;
}
void insertionSort(int arr[], int length) {
	int i, j, tmp;
	for (i = 1; i < length; i++) {
		j = i;
		while (j > 0 && arr[j - 1] > arr[j]) {
			tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			j--;
		}
	}
}

Insertionsort::~Insertionsort()
{
}
