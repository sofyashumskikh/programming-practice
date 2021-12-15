#include <iostream>
#include <string>

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

	std::string result = "";

	while (n > 0) {
		if (n % sys > 9)
			result += char('A' + (n % sys) - 10);
		else
			result += char((n % sys)+48);
		n /= sys;
	}

	for (int i = result.length(); i >= 0; --i) {
		std::cout << result[i];
	}

	std::cout << std::endl;

	return 0;

}
