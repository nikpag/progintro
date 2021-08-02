#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int findSpace(string str, int order) {
  int occurrence = 0;
  for (int i = str.length() - 1; i >= 0; i--) {
    if (str[i] == ' ') {
      occurrence++;
      if (occurrence == order) {
        return i;
      }
    }
  }
  return -1;
}

void insertSpaces(string &str, int spaces) {
  for (int i = 1; i <= spaces; i++) {
    int indexToInsert = findSpace(str, i+1);

    // inserting the "_" character so extra spaces are clearly visible
    str.insert(indexToInsert, "_");
  }
}

int main(int argc, char **argv) {
  ifstream myfile;
  
  myfile.open(argv[1]);

  string str;
  string line;
  string toSave;

  while (myfile >> str) {
    if (line.length() + str.length() > 60) {
      toSave = str;
      int spaces = max(0, 60 - (int) line.length() + 1);

      insertSpaces(line, spaces);

      cout << line << endl;
      line = toSave + " ";
    }
    else {
      line += str + " ";
    }
  }

  cout << line << endl;
}
