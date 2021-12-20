#include <iostream>
#include <time.h>

int main() {

	int N;
	double result = 1;
	double koeff;

	std::cout << "Input N: ";
	std::cin >> N;

	std::cout << std::endl;

	double **M = new double*[N];

	for (int i = 0; i < N; ++i) {
		M[i] = new double[N];
	}

	srand(time(0));
	//------------------------------------

	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			M[i][j] = rand() % 9 + 1;
	
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j)
			std::cout << M[i][j] << ' ';
		std::cout << std::endl;
	}

	//------------------------------------

	std::cout << std::endl;

	int kol = 0;

	while (kol < N) {

		for (int i = kol+1; i < N; ++i) {
			koeff = M[i][kol] / M[kol][kol];
			result *= koeff;
			for (int j = kol; j < N; ++j)
				M[i][j] = M[i][j] / koeff;
			for (int j = kol; j < N; ++j)
				M[i][j] -= M[kol][j]; 
		}

		++kol;

	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j)
			std::cout << M[i][j] << ' ';
		std::cout << std::endl;
	}

	//------------------------------------

	std::cout << std::endl;

	for (int i = 0; i < N; ++i)
		result *= M[i][i];

	std::cout << "det = " << result << std::endl;


	system("pause");

}