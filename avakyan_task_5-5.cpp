#include <iostream>

int main() {
	system("chcp 65001");
	int number = 0;
	std::cout << "Введите число шестизначное: "; std::cin >> number;
	std::cout << "Введённое число - ";
	if ((number > 99'999 && number < 1'000'000) || (number < -99'999 && number > -1'000'000)) {
		std::cout << "шестизначное\n";
	}
	else {
		std::cout << "не шестизначное\n";
	}
	return 0;

}