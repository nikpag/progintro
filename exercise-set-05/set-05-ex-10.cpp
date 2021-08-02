#include <iostream>
#include <string>

using namespace std;

int main() {
start:
  int N;
  string cont;

  cin >> N;

  if (N % 2 == 0) {
    cout << "You have to supply an odd number" << endl;
    cout << "Do you want to try again?" << endl;
    cin >> cont;

    if (cont[0] == 'y' || cont[0] == 'Y') {
      goto start;
    }
  }

  int a[N][N];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      a[i][j] = -1;
    }
  }

  int i = N / 2, j = N - 1;

  a[i][j] = 0;

  for (int n = 1; n < N * N; n++) {
    i++; j++;

    /*
     * For debugging purposes
     */

    // for (int i = 0; i < N; i++) {
    //   for (int j = 0; j < N; j++) {
    //     cout << a[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    // 
    // cout << endl;

    if (a[i % N][j % N] == -1) {
      a[i % N][j % N] = n;
    }
    else {
      i --; j -= 2;
      a[i % N][j % N] = n;
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  cout << "Do you want to try again?" << endl;
  cin >> cont;

  if (cont[0] == 'y' || cont[0] == 'Y') {
    goto start;
  }
}
