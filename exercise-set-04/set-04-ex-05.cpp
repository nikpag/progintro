#include <iostream>
using namespace std;

int pow(int base, int exp) {
  int result = 1;

  for (int i = 0; i < exp; i++) {
    result *= base;
  }

  return result;
}

int main() {

  int power;

  cin >> power;

  int digitPowers[10];

  for (int i = 0; i < 10; i++)
    digitPowers[i] = pow(i, power);

  for (int i = 0; i <= 99999999; i++) {

    int numOfDigits = 0;
    int digits[8];
    int dummy = i;
    for (int j = 0; dummy > 0; j++) {
      numOfDigits++;
      digits[j] = dummy % 10;
      dummy /= 10;
    }

    int sumOfDigitPowers = 0;

    for (int i = 0; i < numOfDigits; i++)
      sumOfDigitPowers += digitPowers[digits[i]];

    if (i == sumOfDigitPowers) cout << i << endl;
  }
}
