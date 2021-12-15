#include <iostream>

int main() {

	int n, m;
	int k = 0, c = 0;
	int count = 1;

	std::cout << "Input rows: ";
	std::cin >> n;

	std::cout << "Input columns: ";
	std::cin >> m;

	int num = 1;

	int** M = new int* [n];

	for (int i = 0; i < n; ++i) {
		M[i] = new int[m];
	}

	std::cout << std::endl;

	//------------------------------------------------------

	while (k < n && c < m) {

		for (int j = c; j < m-c; ++j) {
			M[c][j] = num;
			++num;
		}

		++c;

		for (int i = k+1; i < n-k; ++i) {
			M[i][m-k-1] = num;
			++num;
		}

		++k;

		for (int j = m - c - 1; j >= c-1; --j) {
			M[n-c][j] = num;
			++num;
		}

		for (int i = n - k - 1; i >= k; --i) {
			M[i][k-1] = num;
			++num;
		}

	}

	//------------------------------------------------------

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cout << M[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	return 0;
		
}