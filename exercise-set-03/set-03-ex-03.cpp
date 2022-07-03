#include <iostream>
using namespace std;

int gcd(int a, int b) {
  while(a > 0 && b > 0)
    if (a > b) a = a % b; else b = b % a;
  return a + b;
}

int sign(int x) {
  if (x > 0) return 1;
  if (x < 0) return -1;
  else return 0;
}

int abs(int x) {
  return x * sign(x);
}

int main() {
  int N;

  cin >> N;

  for (int i = 0; i < N; i++) {
    char op;
    int num1, den1, num2, den2, num, den;
    bool negative;

    cin >> op >> num1 >> den1 >> num2 >> den2;

    if (den1 == 0 || den2 == 0 || op == '/' && num2 == 0) {
      cout << "error";
      continue;
    }

    switch(op) {
      case '+':
        num = num1 * den2 + num2 * den1;
        den = den1 * den2;
        break;
      case '-':
        num = num1 * den2 - num2 * den1;
        den = den1 * den2;
        break;
      case '*':
        num = num1 * num2;
        den = den1 * den2;
        break;
      case '/':
        num = num1 * den2;
        den = den1 * num2;
        break;
    }

    if (num == 0) {
      cout << "0 0 1" << endl;
      break;
    }

    negative = sign(num) != sign(den);

    num = abs(num);
    den = abs(den);

    int whole_part = num / den;
    num = num - whole_part * den;

    int _gcd = gcd(num, den);

    num = num / _gcd;
    den = den / _gcd;

    cout << (negative ? "-" : "") << whole_part << " " << num << " " << den << endl;
  }
}
