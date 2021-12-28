#include <iostream>
#include <fstream>
#include <string>

std::string from_number(int n) {

	std::string result;
	int num;

	while (n > 0) {
		num = n % 16;
		if (num < 10)
			result = char(num + '0') + result;
		else
			result = char(num - 10 + 'A') + result;
		n /= 16;
	}

	return result;

}

std::string from_char(unsigned char ch) {

	int n = ch;
	std::string result;
	int num;
	
	if (n == 0)
		return "00";

	while (n > 0) {
		num = n % 16;
		if (num < 10)
			result = char(num + '0') + result;
		else
			result = char(num - 10 + 'A') + result;
		n /= 16;
	}

	if (result.length() < 2)
		result = '0' + result;

	return result;

}

std::string zero(int n) {

	std::string result = from_number(n);
	int size = result.length();

	for (int i = 1; i < 10 - size; ++i)
		result = '0' + result;

	return result;

}

int main() {

	char ifname[256];
	char ofname[256];

	std::cout << "Source: ";
	std::cin.getline(ifname, 256);

	std::cout << "Destination: ";
	std::cin.getline(ofname, 256);

	std::ifstream InFile(ifname, std::ios_base::binary);
	if (!InFile) {
		std::cout << "!!! Can not open file " << ifname << " !!!";
		return 1;
	}

	std::ofstream OutFile(ofname, std::ios_base::binary);
	if (!OutFile) {
		std::cout << "!!! Can not open file " << ofname << " !!!";
		InFile.close();
		return 2;
	}

	int count = 0, scount = 0;
	int ch;
	std::string s;

	while (InFile.peek() != EOF) {

		if (count == 0)
			OutFile << zero(scount) << "0: ";
		++count;

		ch = InFile.get();
		if (ch < 32)
			s += '.';
		else
			s += ch;

		OutFile << from_char(ch) << ' ';

		if (count == 8)
			OutFile << "| ";
		if (count == 16) {
			OutFile << " | " << s << "\n";
			s = "";
			count = 0;
			++scount;
		}

	}

	if (count != 0 && count < 8) {
		for (int i = 0; i < 8 - count; ++i)
			OutFile << "   ";
		OutFile << "| ";
		for (int i = 0; i < 8; ++i)
			OutFile << "   ";
		OutFile << " | " << s;
	}
	else
		if (count > 8) {
			for (int i = 0; i < 16 - count; ++i)
				OutFile << "   ";
			OutFile << " | " << s;
		}

	InFile.close();
	OutFile.close();

}
