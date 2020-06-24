#include <iostream>
using namespace std;
int main () {
int x;
cout << "Enter the size of the array: ";
cin >> x;
	if(x<=0) {
		cout << "ERROR: you entered an incorrect value for the array size!\n";
	} else if (x>0) {
		int arr[x];
		cout << "Enter the numbers in the array, separated by a space, and press enter: ";
		for (int i=0; i<x; i++) {
			int entry;
			cin >> entry;
			arr[i] = entry;
}
		bool checkarr = false;

		for (int i=1; i<x; i++ ) {
			if (arr[i-1] <  arr[i]) {
				checkarr = true;
			} else {
				checkarr = false;
				break;
			} 
		}
		if (checkarr==true) {
				cout << "This is an increasing array!\n";
				for (int i=0; i < x; i++) {
					cout << arr[i] << " \n";
				}
		} else {
			cout << "This is NOT an increasing aarray!\n";
			for (int i=0; i < x; i++) {
				cout << arr[i] << " \n";
                                }
	}
}}

