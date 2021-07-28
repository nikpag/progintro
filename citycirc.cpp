#include <cstdio>

bool test(int b[], int N, int start) {
  int total = 0; 
  for (int i = start, j = 0; j < N; ++i, ++j) {
    total += b[i % N];
    if (total < 0) return false;
  }
  return true;
}

int main() {
  int N; 
  scanf("%d", &N);
  bool a[N]; 
  for (int i = 0; i < N; ++i) a[i] = true;
  int b[N]; 
  for (int i = 0; i < N; ++i) {
    scanf("%d", &b[i]);
    if (b[i] < 0) a[i] = false;
  }
  for (int i = 0; i < N; ++i) 
     if (a[i]) 
      if (test(b, N, i)) {
        printf("%d\n", i + 1);
        return 0;
      }
  printf("0\n");
}