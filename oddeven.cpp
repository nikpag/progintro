#include <cstdio> 

int main() {  
  int N;  
  scanf("%d", &N);  
  int a[N];  
  for (int i = 0; i <= N - 1; ++i) scanf("%d", &a[i]);  

  for (int i = N; i >= 2; --i)   
    for (int j = 0; j <= N - i; ++j) {  
      int even = 0;   
      for (int k = j; k <= j + i - 1; ++k) if (a[k] % 2 == 0) even++;  
        if (even == i - even) {  
          printf("%d\n", i);
          return 0;  
        }  
    }  
  printf("0\n");
}  