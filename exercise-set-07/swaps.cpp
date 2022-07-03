#include <stdio.h>    

int main() {
  int N, firstNegative, lastPositive, positives = 0, count = 0;
  bool firstNegativeFound = false;
  scanf("%d", &N);
  int a[N];
  for (int i = 0; i < N; ++i) {
    scanf("%d", &a[i]);
    if (a[i] < 0) {
      count += positives;
      if (!firstNegativeFound) {
        firstNegative = a[i];
        firstNegativeFound = true;
      }
    }
    else {
      lastPositive = a[i];
      positives++;
    }
  }
  if (count == 0) printf("0\n%d\n%d\n", a[0], a[N - 1]);
  else printf("%d\n%d\n%d\n", count, firstNegative, lastPositive);
}
