int _min(int a, int b) {
  return a < b ? a : b;
}

int _max(int a, int b) {
  return a > b ? a : b;
}

int minimum(int a[], int length) {
  int answer = a[0];
  for (int i = 0; i < length - 1; i++)
    answer = _min(a[i], a[i+1]);
  return answer;
}

int maximum(int a[], int length) {
  int answer = a[0];
  for (int i = 0; i < length - 1; i++)
    answer = _max(a[i], a[i+1]);
  return answer;
}
