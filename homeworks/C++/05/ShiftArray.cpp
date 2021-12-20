#include <iostream>

void ShiftArray(int* A, int N, int k) {

	int tmp;

	for (int i = 0; i < k; ++i) {
		tmp = A[0];
		for (int j = 0; j < N-1; ++j) {
			A[j] = A[j+1];
		}
		A[N-1] = tmp;
	}

	for (int i = 0; i < N; ++i)
		std::cout << A[i] << ' ';

}

int main() {

	int N, k;

	std::cout << "Input size of array: ";
	std::cin >> N;

	std::cout << std::endl;

	std::cout << "Input shift: ";
	std::cin >> k;

	std::cout << std::endl;

	int* A = new int[N];

	for (int i = 0; i < N; ++i) {
		A[i] = rand() % 10 + 1;
		std::cout << A[i] << ' ';
	}

	std::cout << std::endl;

	ShiftArray(A, N, k);

	std::cout << std::endl;

	system ("pause");

	return 0;

}
