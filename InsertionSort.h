#pragma once
#include"Swap.h"
#include<vector>
using namespace std;

void InsertionSort(vector <int>& A, int n) {
	int x, j;

	for (int i = 1; i < n; i++) {
		x = A[i];
		j = i - 1;
		while (j > -1 && A[j] > x) {
			A[j + 1] = A[j];
			j--;
		}
		A[j+1] = x;
	}

}