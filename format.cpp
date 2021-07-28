#include <iostream>
using namespace std;

int word[1000][30];

void puts(int *p) {
  while (*p != '\0') putchar(*p++);
}

int strlen(int *p) {
  int l = 0;
  while (*p++ != '\0') l++;
  return l;
}

int main() {
  int c, w = 0, l = 0, save = 0;

  while((c = getchar()) != EOF) {
    if ((c == ' ' or c == '\n') and l == 0) continue;
    else if (c == ' ' or c == '\n') {
      word[w++][l] = ' ';
      l = 0;
    }
    else word[w][l++] = c;
  }

  w = 0;

  while (word[w][0] != '\0') {
    int length = 0;
    bool fits = true;

    for (; word[w][0] != '\0'; w++) {
      if (strlen(word[w]) + length > 61) {
        fits = false;
        save = w;
        break;
      }
      else length += strlen(word[w]);
    }

    if (!fits) {
      w--;
      word[w][strlen(word[w])-1] = '\n';
      int save1 = w;
      for (int i = 1; i <= 61 - length; i++) {
        w--;
        if (word[w][strlen(word[w]) - 1] == '\n') w = save1 - 1;
        word[w][strlen(word[w])] = ' ';
      }
      w = save;
    }
    else word[w - 1][strlen(word[w - 1])-1] = '\n';

  }

  for (w = 0; w <= 999; w++) puts(word[w]);
}

