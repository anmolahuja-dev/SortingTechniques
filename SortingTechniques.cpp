#include<iostream>
#include "BubbleSort.h"
using namespace std;



int main() {
	cout << "######### Welcome to Sorting Techniques Program ##########"<<endl;
	int ch;
	do {
		cout << "\nEnter the Sorting, You want to Perform on the Data" << endl;
		cout << "[1] - Bubble Sort" << endl;
		cout << "[2] - Insertion Sort" << endl;
		cout << "[3] - Selection Sort" << endl;
		cout << "[4] - Heap Sort" << endl;
		cout << "[5] - Merge Sort" << endl;
		cout << "[6] - Quick Sort" << endl;
		cout << "[7] - Tree Sort" << endl;
		cout << "[8] - Shell Sort" << endl;
		cout << "[9] - Count Sort" << endl;
		cout << "[10] - Bucket/Bin Sort" << endl;
		cout << "[11] - Radix Sort" << endl;
		cout << "[0] - Quit" << endl;
		cout << "\nEnter your choice : ";
		cin >> ch;

		if (ch == 1) {
			BubbleSort();
		}
		else if (ch == 2) {

		}
		else if (ch == 3) {

		}
		else if (ch == 4) {

		}
		else if (ch == 5) {

		}
		else if (ch == 6) {

		}
		else if (ch == 7) {

		}
		else if (ch == 8) {

		}
		else if (ch == 9) {

		}
		else if (ch == 10) {

		}
		else if (ch == 11) {

		}
		else if (ch == 0) {
			cout << "\nThanks for using the Application" << endl;
		}
		else {
			cout << "\nInvalid Choice, Enter again!" << endl;
		}
	} while (ch != 0);
	return 0;
}