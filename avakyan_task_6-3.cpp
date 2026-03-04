#include <iostream>

int main() {
	system("chcp 1251");
	const int size = 5;
	int arr[size];
	std::cout << "¬ведите 5 целых чисел: ";
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
	std::cout << "¬ведЄнные числа: ";
	int sum = 0;
	int min = arr[0], max = arr[0];
	for (int i = 0; i < size; i++) {
		sum += arr[i];
		std::cout << arr[i] << ' ';
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
	std::cout << "\n—умма введЄнных числе: " << sum << ", среднее арифметическое: " << static_cast<double>(sum) / size << '\n';
	std::cout << "MAX = " << max << ", MIN = " << min;
	return 0;

}