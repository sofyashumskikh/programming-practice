#include <iostream>
#include <cmath>

int main() {

	int num;

	do {
		std::cout << "Input number of room: ";
		std::cin >> num;
	} while (num < 1);

	std::cout << std::endl;

	int i = 1;
	int n = 0;

	while (num > 0) {

		n = i * i + n;

		++i;

		int n_next = i * i + n;

		if (num > n && num <= n_next) {
			std::cout << i << std::endl;
			num = 0;
		}
		else {
			if (num == n) {
				std::cout << i - 1 << std::endl;
				num = 0;
			}
		}

	}

	return 0;

}