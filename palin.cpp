#include <iostream>
using namespace std;

int main() {
	int N, i, j, k, length;
	double counter = 0;
	cin >> N;
	while (getchar() != '\n');

	for (int l = 1; l <= N; l++) {
		char c[21];
		k = length = 0;

		for (i = 0; i <= 21; i++) {
			c[i] = getchar();
			if (c[i] == '\n') break;
			length++;
		}

		for (j = 0; j <= length - 1; j++) if (c[j] != ' ') break;

		if (j == length) {
			cout << "empty" << endl;
			continue;
		}

		if (i == 21) {
			cout << "error" << endl;
			while (getchar() != '\n');
			continue;
		}

		while (c[k] == c[length - k - 1] and k < length) k++;
		if (k == length) {
			cout << "yes" << endl;
			counter++;
		}
		else cout << "no" << endl;
	}

	printf("%0.3f\n", (counter / N) * 100.0);
}
