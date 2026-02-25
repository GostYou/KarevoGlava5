#include <iostream>

int main() {
	system("chcp 1251");
	srand(static_cast<int>(time(0)));
    const int rows = 5;
    const int columns = 8;
    int arr[rows][columns];

    for (int i = 0; i < rows; i++){
        for (int k = 0; k < columns; k++){
            arr[i][k] = rand() % 10;
        }
    }

    for (int i = 0; i < rows; i++){
        for (int k = 0; k < columns; k++){
            std::cout << arr[i][k] << "\t";
        }
        std::cout << std::endl;
        std::cout << std::endl;
    }

    float sum = 0;
    float min = arr[0][0];
    float max = arr[0][0];

    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < columns; k++){
            sum += arr[i][k];

            if (arr[i][k] < min) {
                min = arr[i][k];
            }
            if (arr[i][k] > max) {
                max = arr[i][k];
            }
        }
    }

    std::cout << "\n--- Результаты ---" << std::endl;
    std::cout << "Сумма элементов: " << sum << std::endl;
    std::cout << "Минимальный элемент: " << min << std::endl;
    std::cout << "Максимальный элемент: " << max << std::endl;


    return 0;
}






