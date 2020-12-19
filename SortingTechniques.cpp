#include<iostream>
#include<vector>
#include"BubbleSort.h"
#include"InsertionSort.h"
#include"SelectionSort.h"
#include"QuickSort.h"
#include"MergeSort.h"
#include"CountSort.h"
#include"BinSort.h"
#include"RadixSort.h"
using namespace std;

void print(vector<int>& A, int n) {
	
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
}

vector<int> createArray() {
	int n;
	cout << "\nEnter the number of elements in Array : ";
	cin >> n;
	vector<int>A(n);
	cout << "Enter the elements : " << endl;
	for (int i = 0; i < n; i++) {
		cout << "Enter element [" << i + 1 << "] : ";
		cin >> A[i];
	}
	return A;
}

int main() {
	cout << "######### Welcome to Sorting Techniques Program ##########"<<endl;
	int ch;
	do {
		cout << "\nEnter the Sorting, You want to Perform on the Data" << endl;
		cout << "[1] - Bubble Sort" << endl;
		cout << "[2] - Insertion Sort" << endl;
		cout << "[3] - Selection Sort" << endl;
		cout << "[4] - Quick Sort" << endl;
		cout << "[5] - Merge Sort" << endl;
		cout << "[6] - Count Sort" << endl;
		cout << "[7] - Bucket/Bin Sort" << endl;
		cout << "[8] - Radix Sort" << endl;
		cout << "[9] - Heap Sort" << endl;
		cout << "[0] - Quit" << endl;
		cout << "\nEnter your choice : ";
		cin >> ch;

		vector<int>A;
		int n;

		//creating the array
		if (ch != 0) {
			A = createArray();
			n = A.size();
			cout << "\nArray Before Sorting : ";
			print(A, n);
			cout << endl;
			cout << "\nArray After Sorting : ";
		}
		if (ch == 1) {	
			BubbleSort(A, n);
			print(A, n);
			cout << endl << endl;
		}
		else if (ch == 2) {
			InsertionSort(A, n);
			print(A, n);
			cout << endl << endl;
		}
		else if (ch == 3) {
			SelectionSort(A, n);
			print(A, n);
			cout << endl << endl;
		}
		else if (ch == 4) {
			A.push_back(INT32_MAX);
			n = A.size();
			QuickSort(A,0,n-1);
			print(A, n-1);
			cout << endl << endl;
		}
		else if (ch == 5) {
			MergeSort(A, n);
			print(A, n);
			cout << endl << endl;
		}
		else if (ch == 6) {
			CountSort(A);
			print(A, n);
			cout << endl << endl;
		}
		else if (ch == 7) {
			BinSort(A,n);
			print(A, n);
			cout << endl << endl;
		}
		else if (ch == 8) {
			RadixSort(A, n);
			print(A, n);
			cout << endl << endl;
		}
		else if (ch == 9) {
			cout << "Heap Sort is yet to be added!" << endl;
		}
		else if (ch == 0) {
			cout << "\nThanks for using the Application" << endl;
		}
		else {
			cout << "\n\nOh no! Invalid Choice, Enter again!" << endl;
		}
	} while (ch != 0);
	return 0;
}