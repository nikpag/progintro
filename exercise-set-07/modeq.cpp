#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a % 42 == b % 42 and b % 42 == c % 42) cout << a % 42 << endl;
  else cout << "no\n";
}  
