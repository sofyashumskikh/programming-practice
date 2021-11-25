#include <iostream>

int main() {

	double eps, pi1;
	double pi = 0;
	int kol = 0;

	do {
		std::cout << "Input eps: ";
		std::cin >> eps;
	} while (eps < 0);

	std::cout << std::endl;

	for (int i = 1; ; i += 2) {
		++kol;
		pi1 = pi;
		pi = (kol % 2 == 0) ? pi - 1.0 / i : pi + 1.0 / i;
		if ((int)(pi / eps) == (int)(pi1 / eps)) break;
	}

	pi *= 4;

	std::cout << pi << std::endl;
	std::cout << kol << std::endl;

	return 0;

}