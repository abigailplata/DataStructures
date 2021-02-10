#include <iostream>
using namespace std;

int main(){

  int size;
  int descend = 0;
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

    cout << "This is the sorted array in descending order: ";
    for (int i = size; i >= 1; --i){
      for (int j = 1; j < i; j++){ 
        if (arr[j] > arr[descend]){ //ERROR WITH DESCEND
          descend = j;
        }
      }
      
      if (descend != i){
        int temp = arr[i];
        arr[i] = arr[descend];
        arr[descend] = temp;
        descend++;
      }
      cout << arr[i] << " ";
    }
    cout << endl;
    cout<< "The algorithm selected the maximum for the traverse of the array." << endl;
    cout << "It took " << descend << " swaps to sort the array..." << endl;

  }
  return 0;
}

