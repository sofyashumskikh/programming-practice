#include <iostream>

//при eps = 1e-6   136121

int main() {

	int n = 136121;
	int x, y;
	int R = 100, kol = 0;

	for (int i = 0; i < n; ++i) {
		x = rand() % 101;
		y = rand() % 101;
		if (x * x + y * y <= R * R) {
			++kol;
		}
	}

	double result = double(kol) / double(n);

	std::cout << 4*result << std::endl;

}