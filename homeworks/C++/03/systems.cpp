#include <iostream>

int main() {

	int sys, n;
	//int result = 0;

	do {
		std::cout << "Input system (from 2 to 16): ";
		std::cin >> sys;
	} while (sys < 2 || sys > 16);

	do {
		std::cout << "Input number: ";
		std::cin >> n;
	} while (n < 0);

	std::cout << std::endl;
	std::cout << "number " << n << " in " << sys << " system = ";

	while (n > 0) {
		if (n % sys > 9)
			std::cout << char('A' + (n % sys) - 10);
		else
			std::cout << n % sys;
		n /= sys;
	}

	std::cout << std::endl;

	return 0;

}