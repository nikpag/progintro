#include <iostream>
#include <algorithm>

using namespace std;

int _min(int a, int b) {
  return a < b ? a : b;
}

int _max(int a, int b) {
  return a > b ? a : b;
}

int main() {
  int N;

  cin >> N;

  int a[N], b[N];

  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < N; i++) {
    cin >> b[i];
  }

  sort(a, a + N);
  sort(b, b + N);

  bool valid = true;
  int min;
  int max;

  for (int i = 0; i < N; i++) {
    if (a[i] != b[i]) {
      valid = false;
      min = _min(a[i], b[i]);
      break;
    }
  }

  for (int i = N - 1; i >= 0; i--) {
    if (a[i] != b[i]) {
      valid = false;
      max = _max(a[i], b[i]);
      break;
    }
  }

  if (valid) cout << "yes" << endl;
  else cout << "no " << min << " " << max << endl;
}
