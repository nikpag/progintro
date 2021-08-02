#include <iostream>
using namespace std;

int main() {
  double x, y;
  cin >> x >> y;
  if (x * x + y * y < 1) cout << "inside\n";
  else if (x * x + y * y == 1) cout << "border\n";
  else cout << "outside\n";
}  
