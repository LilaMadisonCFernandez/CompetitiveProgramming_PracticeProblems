#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Enter a number:";
  cin >> x;
  
  int product;
  
  for (int i = 1; i <= 10; i++) {
    int product = x * i;
    cout << x << 'x' << i << '=' << product << "\n";
  }

return 0;
}
