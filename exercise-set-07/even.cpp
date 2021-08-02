#include <iostream>
using namespace std;

int main() {
  int M, N, counter = 0;
  cin >> M >> N;
  if (M % 2 == 0) counter++;
  if (N % 2 == 0) counter++;
  cout << counter << endl;
}  
