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
  int digitPowers[10] = {pow(0, 4), pow(1, 4), pow(2, 4),
                         pow(3, 4), pow(4, 4), pow(5, 4),
                         pow(6, 4), pow(7, 4), pow(8, 4),
                         pow(9, 4)};

  for (int i = 1000; i <= 9999; i++) {
    int digits[4];
    int dummy = i;
    for (int j = 3; j >= 0; j--) {
      digits[j] = dummy % 10;
      dummy /= 10;
    }

    if (i == digitPowers[digits[0]] + digitPowers[digits[1]] +
             digitPowers[digits[2]] + digitPowers[digits[3]])
               cout << i << endl;
  }
}
