#include <iostream>



int main() {
	system("chcp 1251");
	srand(static_cast<int>(time(0)));
	int size = 0;
	std::cout << "Введите размер массива: "; std::cin >> size;
	int* arr = new int[size];
	char method_fill;
	std::cout << "Как заполнять? [К]лавиатура / [С]лучайные числа:\n>_: "; std::cin >> method_fill;
	int sum = 0;
	if (method_fill == 'K' || method_fill == 'К') {
		for (int i = 0; i < size; i++) {
			std::cin >> arr[i];
		}
	}
	else if(method_fill == 'С' || method_fill == 'C'){
		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 20 - 10;
		}
	}
	else {
		std::cout << "Не знаю таких команд\n";
		return 1;
	}
	int max = arr[0], min = arr[0];
	for (int i = 0; i < size; i++) {
		sum += arr[i];
		std::cout << arr[i] << ' ';
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
	std::cout << "\nСумма введённых числе: " << sum << ", среднее арифметическое: " << static_cast<double>(sum) / size << '\n';
	std::cout << "MAX = " << max << ", MIN = " << min;
	return 0;
}