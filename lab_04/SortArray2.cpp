#include <iostream>

using namespace std;


void sort(int kind, int arr[], int size) {
 for(int i = 1; i < size; i++) {
                int j = i;

                while (j>0 && arr[j-1] > arr[j]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    j--; 
                }

                }



 cout << "This is the sorted array in ascending order: \n";

         for(int i = 0; i < size; i++) {

                cout << arr[i] << " ";

                }

        cout << "\n";


} 

void sort(bool kind, int arr[], int size) {
 for(int i = 0; i < size-1; i++) {
                int j = 1 + i; 
                int temp = arr[j];

                while (j > 0 && temp > arr[j-1]){
                    arr[j] = arr[j-1];
                    j--;
                }
arr[j] = temp;
                }

 cout << "This is the sorted array in descending order: \n";

         for(int i = 0; i < size; i++) {

                cout << arr[i] << " ";

                }

        cout << "\n";


}


int main () {
        int size;

        cout << "Enter the size of the array: ";
        cin >> size;

        if (size < 0 || size > 10) {
        cout << "ERROR: you entered an incorrect value for the array size!";

       } else {

        cout << "Enter the numbers in the array, separated by a space, and press enter:";
        int arr[size];

        for(int i = 0; i < size; i++) {

                cin >> arr[i];

                }

	cout << "\n";

	cout << "Sort in descending (0) or ascending (1) order? "; 
	
	int Num;

	cin >> Num;

	if (Num == 0) { 

		bool kind;

		sort(kind, arr, size);
	
	} else if (Num == 1){

		int kind;  

		sort(kind, arr, size);

	}


	}

}


