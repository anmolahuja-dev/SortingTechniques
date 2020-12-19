#pragma once
#include<vector>
using namespace std;

int Max(vector<int>& A) {
	int max = INT_MIN;
	for (int i = 0; i < A.size(); i++) {
		if (A[i] > max) {
			max = A[i];
		}
	}
	return max;
}

void CountSort(vector<int>& A) {
	int max;
	int* C;
	max = Max(A);
	C = new int[max + 1];

	for (int i = 0; i < max + 1; i++) { C[i] = 0; }

	for (int i = 0; i < A.size(); i++) {
		C[A[i]]++;
	}

	int k = 0;
	for (int i = 0; i < max + 1; i++) {
		if (C[i] >= 1) {
			while (C[i] != 0) {
				A[k++] = i;
				C[i]--;
			}
		}
	}
}