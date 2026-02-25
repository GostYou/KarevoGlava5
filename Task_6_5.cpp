#include <iostream>

int main() {
    system("chcp 1251");
    const int size = 7;
    float arr[size];

    std::cout << "Введите 7 элементов массива (тип float):" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Элемент " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "\nВведите отрицательные элементы массива:" << std::endl;
    bool hasNegatives = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            std::cout << arr[i] << " ";
            hasNegatives = true;
        }
    }
    if (!hasNegatives) {
        std::cout << "Отрицательных элементов нет";
    }
    std::cout << std::endl;

    std::cout << "\nВведите нецелые элементы массива:" << std::endl;
    bool hasNonIntegers = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] != static_cast<int>(arr[i])) {
            std::cout << arr[i] << " ";
            hasNonIntegers = true;
        }
    }
    if (!hasNonIntegers) {
        std::cout << "Нецелых элементов нет";
    }
    std::cout << std::endl;

    std::cout << "\nЦелые положительные элементы массива:" << std::endl;
    bool hasPosInts = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && arr[i] == static_cast<int>(arr[i])) {
            std::cout << static_cast<int>(arr[i]) << " ";
            hasPosInts = true;
        }
    }
    if (!hasPosInts) {
        std::cout << "Целых положительных элементов нет";
    }
    std::cout << std::endl;

    return 0;
}