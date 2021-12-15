#include <iostream>

void ShiftArray(int* A, int N, int k) {

	int* M = new int[N];
	int count = 0;

	for (int i = 0; i < N-k; ++i) {
		M[i] = A[i + k];
	}

	for (int i = N - k; i < N; ++i) {
		if (count < k) {
			M[i] = A[count];
			++count;
		}
	}

	for (int i = 0; i < N; ++i)
		std::cout << M[i] << ' ';

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

	return 0;

}