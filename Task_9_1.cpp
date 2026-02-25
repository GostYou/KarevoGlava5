#include <iostream>

int main(){
    system("chcp 1251");
	int size;

	std::cout << "Введите размер массива: ";
	std::cin >> size;

	float* arr = new float[size];

	std::cout << "Введите " << size << " элемента массива: " << std::endl;
	for (int i = 0; i < size; i++){
		std::cin >> arr[i];
	}

    float sum = 0;
    float min = arr[0];
    float max = arr[0];

    for (int i = 0; i < size; i++) {
        sum += arr[i];
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    float average = sum / size;

    std::cout << "\n--- Результаты ---" << std::endl;
    std::cout << "Сумма элементов: " << sum << std::endl;
    std::cout << "Среднее арифметическое: " << average << std::endl;
    std::cout << "Мин: " << min << "    Макc: " << max << std::endl;

    delete[] arr;

    return 0;
}