#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  if (N % 7 == 0 and N % 6 != 0) cout << "yes\n";
  else cout << "no\n";
}  
