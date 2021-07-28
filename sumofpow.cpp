#include <iostream> 
#include <vector>
using namespace std; 

int pow(int x, int y) {
	int result = 1;
	for (int i = 0; i < y; ++i) result *= x;
	return result;
}

int main() {
	int N, p2[23], p3[15], p5[10]; 
	cin >> N;
	for (int i = 0; i < 23; ++i) p2[i] = pow(2, i);
	for (int i = 0; i < 15; ++i) p3[i] = pow(3, i);
	for (int i = 0; i < 10; ++i) p5[i] = pow(5, i);
	vector<bool> v; 
	for (int i = 0; i <= N; ++i) v.push_back(false);
	for (int i = 0; i < 23; ++i) 
		for (int j = 0; j < 15; ++j) 
			for (int k = 0; k < 10; ++k) 
				if (p2[i] + p3[j] + p5[k] <= N) v[p2[i] + p3[j] + p5[k]] = true;
	int count = 0;
	for (int i = 0; i <= N; ++i) 
		if (v[i]) count++; 
	cout << count << endl;
}