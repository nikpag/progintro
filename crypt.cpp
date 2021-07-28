#include <iostream>
using namespace std;

int main() {
  char t[26], inv[26];
  int a[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0};

  for (int i = 0; i <= 25; i++) { //read transposition and inverse 
    t[i] = getchar();
    inv[t[i] - 'a'] = 'a' + i;
  }

  for (int i = 0; i <= 25; i++) // check if every letter appears only once 
    a[t[i] - 'a']++;

  for (int i = 0; i <= 25; i++) // if a letter doesn't appear or appears twice end the program
    if (a[i] != 1) {
      cout << "error" << '\n';
      return 0;
    }

  while (getchar() != '\n'); //skip line
  char decrypt = getchar();
  if (decrypt == 'e') {
    while(getchar() != '\n'); 
    int c = getchar();
    while (c != EOF) {
      if (c >= 'a' and c <= 'z') { //if small use transposition
        putchar(t[c - 'a']);
      }
      else if (c >= 'A' and c <= 'Z') { //if capital then use transposition and then make capital
        putchar(t[c - 'A'] - 'a' + 'A');
      }
      else putchar(c); //if not small nor capital just put
      c = getchar();
    } 
  }

  else if (decrypt == 'd') { 
    while(getchar() != '\n'); 
    int c = getchar();
    while (c != EOF) {
      if (c >= 'a' and c <= 'z') { //if small use transposition
        putchar(inv[c - 'a']);
      }
      else if (c >= 'A' and c <= 'Z') { //if capital then use transposition and then make capital
        putchar(inv[c - 'A'] - 'a' + 'A');
      }
      else putchar(c); //if not small nor capital just put
      c = getchar();
    } 
  }
}

