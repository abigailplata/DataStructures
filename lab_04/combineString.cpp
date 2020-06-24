
#include <iostream>
using namespace std; 

string combineStr(string str, int inp) {
        string output;
                for (int i=0; i < inp; i++) {
                        output += str;

                }
                 return(output);


}


int main() { 
        string str;
        int inp = 0;
        cout << "Enter a string: ";
        cin >> str;
        cout << "Enter a number of times: ";
        cin >> inp;
        cout << "The resulting string is: " << combineStr(str, inp) << endl;
}


