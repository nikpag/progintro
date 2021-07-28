#include <algorithm>
#include <iostream> 
using namespace std; 

int binarySearch(int a[], int x, int first, int last) {
  if (first > last) return -1;
  int mid = (first + last) / 2;
  if (x == a[mid]) return mid;
  else if (x < a[mid]) return binarySearch(a, x, first, mid - 1);
  else return binarySearch(a, x, mid + 1, last);
}

int main() {
  int n, x, count = 0;
  cin >> n >> x; 
  int a[n];
  bool needsTesting[n];
  for (int i = 0; i < n; ++i) {
    needsTesting[i] = true;
    cin >> a[i];
  }
  sort(a, a + n);
  for (int i = 0; i < n; ++i) {
    if (needsTesting[i]) {
      int _search = binarySearch(a, x - a[i], i + 1, n - 1);
      if (_search != -1) {
        count++;
        needsTesting[_search] = false;
      }
    }
  }
  cout << count << endl;
}