#pragma once
#include"Swap.h"
#include<vector>
using namespace std;

void SelectionSort(vector<int>& A, int n) {
	int i, j, k;
	for ( i = 0; i < n - 1; i++) {
		for (j = k = i; j < n; j++) {
			if (A[j] < A[k]) {
				k = j;
			}
		}
		swap(A[i], A[k]);
	}
}