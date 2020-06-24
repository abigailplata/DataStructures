#include <iostream> 
using namespace std;
int main() {
int x,y;
cout << "Enter the number of lines for the punishment: ";
cin >> x; 
	if (x>0) {
		cout << "Enter the line for which we want to make a typo:";
		cin >> y;
		if (y<0) {
			cout << "You entered an incorrect value for the line typo" << "!\n";
		} else if (y>0) {
		for(int i=1; i<=x; i++) {
			if (i == y) {
			cout << "I will always use object oriented programing" << ".\n";
			} else {
			cout << "I will always use object oriented programming" << ".\n";
}	}
		}
	} else if (x < 0) {
		cout << "You entered an incorrect value for the number of lines!"<<endl;
	}
return 0; }

