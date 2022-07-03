#include <iostream>
using namespace std;

int main() {
  int N, counter = 0;
  cin >> N;
  while (N > 0) {
    N = N / 10;
    counter++;
  }
  if (counter % 2 == 0 and counter != 0) cout << "yes\n";
  else cout << "no\n";
}  
