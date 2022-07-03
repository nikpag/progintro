#include <iostream>
using namespace std;

int _max(int a, int b) {
  return a > b ? a : b;
}

int _min(int a, int b) {
  return a < b ? a : b;
}

/*
 * For debugging purposes
 */

void print1DArray(int a[], int length) {
  for (int i = 0; i < length; i++) {
    cout << a[i] << " ";
  }

  cout << endl;
}

/*
 * For debugging purposes
 */

void print2DArray(int a[], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    print1DArray(&a[i * columns], columns);
  }
}

int maxOfColumn(int a[], int N, int M) {
  int answer = a[0];
  for (int i = 0; i < N; i++) {
    answer = _max(a[i * M], answer);
  }
  return answer;
}

int minOfRow(int a[], int N, int M) {
  int answer = a[0];
  for (int i = 0; i < M; i++) {
    answer = _min(a[i], answer);
  }
  return answer;
}

int maxOfRow(int a[], int N, int M) {
  int answer = a[0];
  for (int i = 0; i < M; i++) {
    answer = _max(a[i], answer);
  }
  return answer;
}
int main() {
  int N, M;

  cin >> N >> M;

  int a[N * M];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> a[i * M + j];
    }
  }

  /*
   * For debugging purposes
   */

  // print2DArray(a, N, M); cout << endl;

  int maxOfColumns[M];

  for (int i = 0; i < M; i++) {
    maxOfColumns[i] = maxOfColumn(&a[i], N, M);
  }

  /*
   * For debugging purposes
   */

  // print1DArray(maxOfColumns, M); cout << endl;

  int minOfRows[N];

  for (int i = 0; i < N; i++) {
    minOfRows[i] = minOfRow(&a[i * M], N, M);
  }

  /*
   * For debugging purposes
   */

  // print1DArray(minOfRows, N); cout << endl;

  cout << minOfRow(maxOfColumns, 0, M) << endl << maxOfRow(minOfRows, 0, N) << endl;
}
