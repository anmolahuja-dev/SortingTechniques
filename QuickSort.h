#pragma once
#include"Swap.h"
#include<vector>
using namespace std;

int partition(vector<int>& A, int l, int h) {
	int pivot = A[l];
	int i = l, j = h;
	do {
		do { i++; } while (A[i] <= pivot);
		do { j--; } while (A[j] > pivot);

		if (i < j) {
			swap(&A[i], &A[j]);
		}

	} while (i < j);

	swap( &A[l],&A[j]);
	return j;

}

void QuickSort(vector<int>& A, int l, int h) {
	int j;
	if (l < h) {
		j = partition(A, l, h);
		QuickSort(A, l, j);
		QuickSort(A, j+1, h);
	}
}