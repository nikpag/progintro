#include <iostream>
using namespace std;

int factorial(int N) {
  int result = 1;
  for (int i = 1; i <= N; i++) {  
    result *= i;
  }
  return result;
}

int main() {
  int N;
  cin >> N;

  int answer = 0;

  for (int i = 0; factorial(i) <= N; i++) {
    answer = i;
  }

  cout << answer << endl;
}
