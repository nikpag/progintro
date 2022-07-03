#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  cout << ((A * B) / 100) % 10 << ((A * B) / 10) % 10 << endl;
}  
