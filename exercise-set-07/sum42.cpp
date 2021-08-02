#include <iostream>
using namespace std;

int main() {
  int M, N;
  cin >> M >> N;
  if ((M + N) % 100 == 42) cout << "yes\n";
  else cout << "no\n";
}
