#include <iostream>


// M = 1000; C = 100; X = 10; I = 1;
// D = 500; L = 50; V = 5;

int main() {

	int n, counter;
	int razr = 1000;

	do {
		std::cout << "Input number: ";
		std::cin >> n;
	} while (n < 0 || n >3999);

	std::cout << std::endl;
	std::cout << "to Rome --> ";

	while (n > 0) {

		if (n / razr >= 5) {
			n -= razr * 5;
			if (razr == 100) std::cout << 'D';
			if (razr == 10) std::cout << 'L';
			if (razr == 1) std::cout << 'V';
		}

		if (n / razr > 0) {
			counter = n / razr;
			while (counter > 0) {
				if (razr == 1000) std::cout << 'M';
				if (razr == 100) std::cout << 'C';
				if (razr == 10) std::cout << 'X';
				if (razr == 1) std::cout << 'I';
				--counter;
			}
			n %= razr;
		}

		razr /= 10;

	}

	return 0;

}