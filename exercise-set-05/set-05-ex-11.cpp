#include <iostream>
using namespace std;

int main() {
  int N;

  cin >> N;

  int a[N][N];
  bool seen[N * N];

  for (int i = 0; i < N * N; i++) {
    seen[i] = false;
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> a[i][j];
      seen[a[i][j]] = true;
    }
  }

  for (int i = 0; i < N * N; i++) {
    if (seen[i] == false) {
      cout << "no" << endl;
      return 0;
    }
  }

  int checkSum = 0;

  for (int j = 0; j < N; j++) {
    checkSum += a[0][j];
  }

  int sum = 0;

  // Rows
  for (int i = 0; i < N; i++) {
    sum = 0;
    for (int j = 0; j < N; j++) {
      sum += a[i][j];
    }
    if (sum != checkSum) {
      cout << "no" << endl;
      return 0;
    }
  }

  // Columns
  for (int j = 0; j < N; j++) {
    sum = 0;
    for (int i = 0; i < N; i++) {
      sum += a[i][j];
    }
    if (sum != checkSum) {
      cout << "no" << endl;
      return 0;
    }
  }

  // Main diagonal
  sum = 0;
  for (int i = 0; i < N; i++) {
    sum += a[i][i];
  }
  if (sum != checkSum) {
    cout << "no" << endl;
    return 0;
  }

  // Secondary diagonal
  sum = 0;
  for (int i = 0; i < N; i++) {
    sum += a[i][N - 1 - i];
  }
  if (sum != checkSum) {
    cout << "no" << endl;
    return 0;
  }

  cout << "yes" << endl;
}
