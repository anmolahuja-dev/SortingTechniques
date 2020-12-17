#pragma once
#include<math.h>
#include"Swap.h"
#include<vector>
using namespace std;

void merge(vector<int>& A ,int l, int mid, int h) {
	int i, j, k;
	i = l, j = mid + 1, k = l;
	int* B;
	B = new int[h];
	while (i <= mid && j <= h) {
		if (A[i] < A[j]) {
			B[k++]=A[i++];
		}
		else {
			B[k++]=A[j++];
		}
	}

	for (; i <= mid; i++) {
		B[k++]=A[i];
	}
	for (; j <= h; j++) {
		B[k++]=A[j];
	}

	for (int i = l; i <= h; i++) {
		A[i] = B[i];
	}
}

//Iterative Merge Sort
void IMergeSort(vector<int>& A,int n) {
	int p, l, h, mid,i;
	
	for (p = 2; p <= n; p = p * 2) {
		
		for (i = 0; i+p-1<n; i = i + p) {
			l = i;
			h = i + p - 1;
			mid = floor((l + h) / 2);
			merge(A, l, mid, h);
		}
	}
	
	if (p / 2 < n)merge(A,0, p / 2, n - 1);
}


//Recursive MergeSort
void RMergeSort(vector<int>& A, int l, int h) {
	vector<int>B;
	int mid;
	if (l < h) {
		mid = (l + h) / 2;
		RMergeSort(A, l, mid);
		RMergeSort(A, mid + 1, h);
		merge(A,  l, mid, h);
	}
}


void MergeSort(vector<int>& A, int n) {
	int sub_ch;
	cout << "\nWhich type of Merge Sort, you want to perform ? " << endl;
	cout << "[1] - Iterative" << endl;
	cout << "[2] - Recursive" << endl;
	cout << "Enter your choice : ";
	cin >> sub_ch;
	if (sub_ch == 1) {
		IMergeSort(A, n);
	}
	else if (sub_ch == 2) {
		RMergeSort(A, 0, n - 1);
	}
	else {
		cout << "\nInvalid choice!" << endl;
	}

}