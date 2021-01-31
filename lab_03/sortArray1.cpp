#include <iostream>
using namespace std; 
int main() { 

	int x = 0;
	int arr[x];
	int inp = 0;
	cout << "Enter the size of the array: " <<endl;
	cin >> x >> endl;
	if (x < 1) {
        	cout << "ERROR: you entered an incorrect value for the array size!" << endl;
	} else {

        	cout << "Enter the numbers in the array, seperated by a space, and press enter:" << endl;
        	for (int i=0; i<x; i++) {
			cin >> arr[i] >> endl;

			for (int k = 0; k < x; k++) {
				for (int j = 0; j < x-1; j++) {
					if (arr[j] > arr[j+1]) {
						inp = arr[j];
						arr[j] =arr[j+1];
						arr[j+1] =inp;
					}
				}
			}
			cout << "This is the sorted array in ascending order: " << endl ;

			for (int m = 0; m < x; m++) {
				if (m < x - 1) {
					cout << arr[m] << " ";
				} else {
					cout << arr[m] << "\n";
				}

			cout << "The algorithm selected the minimum for the transverse of the array.\n" << endl;

			int v=1;
                if (i == 0) {
				cout << "We ran into the best case scenerio!" << endl;
            } else if (i == x -1) {
				cout << "We ran into the worst case scenario!" << endl;
			}
	
			if (v == 0) {
				cout << "The value " << v  << " was not found in the array!" << endl;
			}
		}
	}
}
}
