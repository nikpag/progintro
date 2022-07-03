#include <iostream>
using namespace std;

int main() {
  int num1, den1, num2, den2;

  cin >> num1 >> den1 >> num2 >> den2;

  int num = num1 * den2 + num2 * den1;
  int den = den1 * den2;

  cout << num << " " << den << endl; 
}
