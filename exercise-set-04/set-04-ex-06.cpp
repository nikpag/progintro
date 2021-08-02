#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

bool isPalindrome(string str) {
  int len = str.length();
  for (int i = 0; i < len; i++)
    if(str[i] != str[len - 1 - i]) return false;

  return true;
}

int main() {
  int N;
  cin >> N;

  int yesCount = 0;

  string str;
  for (int i = 0; i < N; i++) {
    cin >> str;

    if (str.empty()) {
      cout << "empty" << endl;
      break;
    }
    if (str.length() > 20) {
      cout << "error" << endl;
      break;
    }
    if (isPalindrome(str)) {
      cout << "yes" << endl;
      yesCount++;
    }
    else cout << "no" << endl;
  }

  cout << fixed << setprecision(3) << 100.0 * yesCount / N << endl;
}
