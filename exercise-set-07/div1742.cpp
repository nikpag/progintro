#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if (A % 42 == 0 and B % 17 == 0 or A % 17 == 0 and B % 42 == 0) cout << "yes\n";
  else cout << "no\n";
  }  
