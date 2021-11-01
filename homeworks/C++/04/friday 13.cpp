#include <iostream>

int main() {

	int minyear = 1901;
	int month = 1, day = 13;
	int count = 0;
	
	int a, y, m, d;

	while (minyear <= 2000) {

		a = (14 - month) / 12;
		y = minyear - a;
		m = month + 12 * a - 2;

		d = (day + y + y / 4 - y / 100 + y / 400 + 31 * m / 12) % 7;

		if (d == 5) 
			++count;

		if (month < 12)
			++month;
		else {
			++minyear;
			month = 1;
		}

	}

	std::cout << "numbers of fridays 13 in the 20th century:" << std::endl;
	std::cout << std::endl; 
	std::cout << "\t " << count << std::endl;


}