#include <iostream>
//using namespace std; 
int main() { 

	int sizeofarr; //size of array
	int temp = 0; //temporary place holder

	std::cout << "Enter the size of the array: ";
	std::cin >> sizeofarr;
	std::cout << std::endl;
	int* arr = new int[sizeofarr];

	if (sizeofarr <= 0) {
        	std::cout << "ERROR: you entered an incorrect value for the array size!" << std::endl;
	} else {
        	std::cout << "Enter the numbers in the array, seperated by a space, and press enter:";

			//inputting array:
			for (int i =0; i<sizeofarr; i++){
   				std::cin >> arr[i];
				//while (scanf("%d", &arr[i++]) == 1);
			}

			//SORTING:
			for (int k = 0; k < sizeofarr; k++) {
				for (int j = 0; j < sizeofarr-1; j++) {
					if (arr[j] > arr[j+1]) {
						temp = arr[j];
						arr[j] = arr[j+1];
						arr[j+1] =temp;
					}
				}
			}
			
			std::cout << "This is the sorted array in ascending order: ";		
			for (int m = 0; m < sizeofarr; m++) {
				if (m < sizeofarr - 1) {
					std::cout << arr[m] << " ";
				} else {
					std::cout << arr[m] << "\n";
				}
			}
	
			std::cout << "The algorithm selected the minimum for the transverse of the array.\n" << std::endl;
				
			// 	int v=1;
            // 	if (i == 0) {
			// 		std::cout << "We ran into the best case scenerio!" << std::endl;
           	// 	} else if (i == sizeofarr-1) {
			// 		std::cout << "We ran into the worst case scenario!" << std::endl;
			// 	}
	
			// 	if (v == 0) {
			// 		std::cout << "The value " << v  << " was not found in the array!" << std::endl;
			// 	}

			// }
	 }
	
delete [] arr;
}
