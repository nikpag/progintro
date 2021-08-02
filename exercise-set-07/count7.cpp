#include <iostream>
using namespace std;

int main() {
  int N, counter = 0;
  cin >> N;
  if (N / 10 == 7) counter++;
  if (N % 10 == 7) counter++;
  cout << counter << endl;
}  
