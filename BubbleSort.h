#pragma once
#include"Swap.h"
#include<vector>
using namespace std;

void BubbleSort(vector<int>&A, int n) {
	int flag = 0;    //to make the algorithm adaptive
	for (int i = 0; i < n; i++) {
		
		flag = 0;
		
		for (int j = 0; j < n - 1 - i; j++) {
			if (A[j] > A[j + 1]) {
				swap(&A[j], &A[j + 1]);
				flag = 1;
			}
		}

		if (flag == 0) {         //this means that the list is sorted now no need to go further
			break;
		}
	}
}