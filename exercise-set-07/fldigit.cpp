#include <iostream>
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  if (N / 100000 == D and N % 10 == D) cout << "yes\n";
  else cout << "no\n";
}  
