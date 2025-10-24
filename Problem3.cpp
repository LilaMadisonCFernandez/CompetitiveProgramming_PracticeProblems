#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input;
    int x;
    int evennum = 0, oddnum = 0;
    
    cout << "Enter multiple numbers (Example: [n1, n2, n3, ...])";
    getline(cin, input);
    
    for (char &c : input) {
        if (c == '[' or c == ']' or c == ',')
            c = ' ';
    }
    
    stringstream ss(input);
    
    while (ss >> x) {
        if (x % 2 == 0)
            evennum++;
        else
            oddnum++;
    }
    cout << "\nThere are " << evennum << " even numbers" << endl;
    cout << "There are " << oddnum << " odd numbers" << endl;
    
    return 0;
}
