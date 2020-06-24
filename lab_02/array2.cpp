#include <iostream>
using namespace std;
int main() {
	string str;
	cout << "Enter the string to reverse: ";
	cin >> str;
	cout << "\nThe reverse string is: ";
	for (int i=str.length()-1; i >= 0; i--) {
		cout << str.at(i);
}
	cout << "\n";
	return 0;
}

