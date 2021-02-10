#include <iostream>
using namespace std;

//note: changing variable "descend" to "temporary" assuming it is a temporary storage variable.

int main(){

  int size;
  int swap = 0;
  int arr[10];
  cout << "Enter the size of the array: ";
  cin >> size;
  if (size <= 0){
    cout << "ERROR: you entered an incorrect value for the array size!";
    return 0;
  } else {
    cout << "Enter the numbers in the array, separated by a space, and press enter: ";
      for (int i = 0; i < size; i++){
        cin >> arr[i];
      }
    
    //SORTING:
    for (int i = size; i > 0; --i){
      for (int j = 0; j < size; j++){ 
        if (arr[j] < arr[i]){ 
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            swap++;
        }
      }
    }

    cout << "This is the sorted array in descending order: ";
    //PRINTING SAVED ARRAY:
    for(int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }

    cout << endl;
    cout<< "The algorithm selected the maximum for the traverse of the array." << endl;
    cout << "It took " << swap << " swaps to sort the array..." << endl;

  }
  return 0;
}

