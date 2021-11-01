#include <iostream>

int main() {
	
	int day, month, year = 2021;

	std::cout << "Input date: " << std::endl;
	std::cout << "Day: ";
	std::cin >> day;
	std::cout << "Month: ";
	std::cin >> month;
	
	int a = (14 - month) / 12;
	int y = year - a;
	int m = month + 12 * a - 2;

	int d = (day + y + y / 4 - y / 100 + y / 400 + 31 * m / 12) % 7;

	while (d != 5) {
		++y;
		d = (day + y + y / 4 - y / 100 + y / 400 + 31 * m / 12) % 7;
	}

	y = (a == 1) ? y + 1 : y;
	std::cout << y << std::endl;

	return 0;

}