#include <iostream> 
using namespace std;
int main() {
int x;
cout << "Enter the number of lines for the punishment: ";
cin >> x; 
	if (x>0) {
		for(int i=0; i<x; i++) {
			cout << "I will always use object oriented programming." << "\n";
		}
	} else if (x < 0) {
		cout << "You entered an incorrect value for the number of lines!"<<endl;
	}
return 0; }


