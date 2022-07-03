#include <iostream>
using namespace std;

bool isUpper(char c) {
  return c >= 'A' && c <= 'Z';
}

bool isLower(char c) {
  return c >= 'a' && c <= 'z';
}

bool isLetter(char c) {
  return isUpper(c) || isLower(c);
}

char toUpper(char c) {
  return c >= 'A' && c <= 'Z' ? c : c - ('a' - 'A');
}

char toLower(char c) {
  return c >= 'a' && c <= 'z' ? c : c + 'a' - 'A';
}

int main() {
  string perm;

  cin >> perm;

  bool seen[26];

  for (int i = 0; i < 26; i++) {
    seen[i] = false;
  }

  for (char c : perm) {
    seen[c - 'a'] = true;
  }

  for (bool b : seen) {
    if (b == false) {
      cout << "error" << endl;
      return 0;
    }
  }

  string mode;

  cin >> mode;

  if (mode[0] == 'd') {
    int invPerm[26];

    for (int i = 0; i < 26; i++) {
      invPerm[perm[i] - 'a'] = i + 'a';
    }

    for (int i = 0; i < 26; i++) {
      perm[i] = invPerm[i];
    }

  }

  char c;

  while (cin.get(c)) {
    if (!isLetter(c)) {
      cout << c;
    }
    else {
      if (isUpper(c)) cout << toUpper(perm[toLower(c) - 'a']);
      else cout << perm[c - 'a'];
    }
  }
}
