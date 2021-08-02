#include <iostream>
using namespace std;

int main() {
  int Y;
  cin >> Y;
  if (Y >= 1930 and (Y - 1930) % 4 == 0 and Y != 1942 and Y != 1946) cout << "yes\n";
  else cout << "no\n";
}  
