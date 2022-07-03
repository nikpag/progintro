#include <iostream>
using namespace std;

int main() {
  double X, Y, Z;
  cin >> X >> Y >> Z;
  if ((X + Y > Z) and (Y + Z > X) and (Z + X > Y)) cout << "yes\n";
  else cout << "no\n";
}  
