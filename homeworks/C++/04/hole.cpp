#include <iostream>

bool check(int M[], int N, int num) {

	for (int i = 0; i < N; ++i)
		if (M[i] == num)
			return true;

	return false;

}


int main() {

	int N;

	std::cout << "Input size of array: ";
	std::cin >> N;
	std::cout << std::endl;

	int* M = new int[N];

	srand(time(0));

	for (int i = 0; i < N; ++i)
		do {
			M[i] = rand() % (N + 1);
		} while (check(M, i, M[i]));

	for (int i = 0; i < N; ++i)
		std::cout << M[i] << ' ';
	std::cout << std::endl;

	int result = N * (N + 1) / 2;

	for (int i = 0; i < N; ++i)
		result -= M[i];

	std::cout << "hole >> " << result << std::endl;

}