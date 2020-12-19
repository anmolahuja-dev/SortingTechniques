#pragma once
#include<vector>
#include"Node.h"
using namespace std;



void insert(Node** Bins, int index) {
	Node* temp = new Node;
	temp->data = index;
	temp->next = nullptr;

	if (Bins[index] == NULL) {
		Bins[index] = temp;
	}
	else {
		Node* p = Bins[index];
		while (p->next!=nullptr) {
			p = p->next;
		}
		p->next = temp;
	}

}

int Delete(Node** Bins, int index) {
	int delElem=0;
	Node* p = Bins[index];
	delElem= p->data;

	if (p->next != nullptr) {
		Node* t = p;
		p = p->next;
		delete t;
	}
	else {
		Bins[index] = nullptr;
	}

	return delElem;
}

void BinSort(vector<int>&A, int n) {
	int max;
	max = Max(A);
	Node** Bins;
	Bins = new Node * [max + 1];

	for (int i = 0; i < max+1; i++) {
		Bins[i] = nullptr;
	}

	for (int i = 0; i < n; i++) {
		insert(Bins,A[i]);
	}
	int k=0;
	for (int i = 0; i < max + 1; i++) {
		while (Bins[i] != nullptr) {
			A[k++] = Delete(Bins, i);
		}
	}

	delete[] Bins;
}