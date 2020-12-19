#pragma once
#include<vector>
#include"Node.h"
using namespace std;

int countDigit(int x) {
	int res=0;
	while (x != 0) {
		res++;
		x = x / 10;
	}
	return res;
}

void RadixSort(vector<int>& A, int n) {
	int max = Max(A);
	int pass = countDigit(max);
	
	Node** Bins;
	Bins = new Node * [10];
	for (int i = 0; i < 10; i++)Bins[i] = nullptr;
	int num=1;
	while (pass != 0) {
		for (int i = 0; i < n; i++) {
			insert(Bins, (A[i]/num) % 10);
		}

		int k = 0;
		for (int i = 0; i < 10; i++) {
			while (Bins[i] != nullptr) {
				A[k++] = Delete(Bins, i);
			}
		}

		num = num * 10;
		pass--;
	}

	delete[]Bins;
}
