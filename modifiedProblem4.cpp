#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a range:";
    cin >> x;
    
    for (int i = 1; i <= x; i++) {
        if (i % 2 == 0) {
            if (i % 7 == 0) {
                cout << i << endl;
            }
        }
    }
    return 0;
}
