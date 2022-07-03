#include <iostream>
using namespace std;

int main() {
  int N, counter = 0;
  cin >> N;
  while (N % 2 == 0) {
    N = N / 2;
    counter++;
  }
  cout << counter << endl;
}
