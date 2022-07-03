#include <iostream>
#include <iomanip>

using namespace std;

/*
 * For debugging purposes
 */

void print1DArray(float a[], int length) {
  for (int i = 0; i < length; i++) {
    cout << a[i] << " ";
  }

  cout << endl;
}

/*
 * For debugging purposes
 */

void print2DArray(float a[], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    print1DArray(&a[i * columns], columns);
  }
}

float averageOfRow(float a[], int N, int M) {
  float sum = 0;

  for (int i = 0; i < M; i++) {
    sum += a[i];
  }
  return sum / M;
}

float averageOfColumn(float a[], int N, int M) {
  float sum = 0;

  for (int i = 0; i < N; i++) {
    sum += a[i * M];
  }
  return sum / N;
}

int main() {
  int N, M;

  cin >> N >> M;

  float a[N * M];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> a[i * M + j];
    }
  }

  print2DArray(a, N, M);

  float averageOfRows[N], averageOfColumns[M];

  for (int i = 0; i < N; i++) {
    averageOfRows[i] = averageOfRow(&a[i * M], N, M);
  }

  for (int i = 0; i < M; i++) {
    averageOfColumns[i] = averageOfColumn(&a[i], N, M);
  }

  print1DArray(averageOfRows, N);
  print1DArray(averageOfColumns, M);

  cout << fixed << setprecision(3) << averageOfRow(averageOfRows, 0, N) << endl << averageOfRow(averageOfColumns, 0, M) << endl;
}
