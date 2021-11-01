#include <iostream>

int main() {

	int n;
	int kol = 0;
	
	do {
		std::cout << "Input numner: ";
		std::cin >> n;
	} while (n < 1);

	std::cout << std::endl;

	int max = n;

	while (n > 1) {
		n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
		if (n > max) max = n;
		++kol;
	}

	//std::cout << n << std::endl;
	std::cout << "top = " << max << std::endl;
	std::cout << "count = " << kol << std::endl;

	return 0;

}