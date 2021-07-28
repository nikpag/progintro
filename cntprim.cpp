#include <iostream> 
using namespace std; 

int sieve(bool a[], int N) {
	int p = 2, p2 = p * p, count = N - 2; 
	while (p2 <= N) {
		for (int i = p2; i < N; i += p) {
			if (a[i]) {
				a[i] = false;
				count--;
			}
		}
		for (int i = p + 1; i < N; ++i) 
			if (a[i]) {
				p = i; 
				p2 = p * p;
				break;
			}  
	}
	return count;
}

int main() {
	int N;
	cin >> N;
	N++;
	bool *a = new bool[N];
	a[0] = a[1] = false;
	for (int i = 2; i < N; ++i) a[i] = true;
	cout << sieve(a, N) << endl;
	delete [] a;
}