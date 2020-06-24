#include <iostream>
using namespace std;
int main() {
int x;
cout << "Enter the size of a 2D array:";
cin >> x;
	if (x > 10 || x <0 ) {
		cout << "ERROR: your array is too large or smal. Enter from 1 to 10. \n";
	} else {
		int negCount;

		int arr[x][x];
		
		for (int i = 0; i < x; i++ ) {
			cout << "Enter the values in the array for row " <<  i+1 << ", seperated by a space, and press enter: ";
			
			for (int j=0; j < x; j++ ) {
				cin >> arr[i][j];
				if (arr[i][j] < 0) {
					negCount++;
				}	
			} 
		}
		
		if (negCount > 0) {
			cout << "\nThere are " << negCount << " negative values! \n";
		} else {
			cout << "\nAll values are non-negative! \n";
		}
	}

	return 0;
}
