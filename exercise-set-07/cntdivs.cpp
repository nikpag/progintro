#include <iostream>
using namespace std;

int gcd(int x, int y) {
  while (x > 0 && y > 0)
    if (x > y) x %= y; else y %= x;
  return x + y;
}

int main() {
  int N, count = 0;
  cin >> N;
  bool *a = new bool[N + 1];
  a[0] = false;
  for (int i = 1; i < N + 1; ++i) if (gcd(i, N) > 1) count++;
  cout << count << endl;
}  
