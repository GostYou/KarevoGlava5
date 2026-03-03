#include <iostream>


int findNOD(int a, int b) {
    if (b == 0) {
        return a; 
    }
    return findNOD(b, a % b);
}

int main() {
    int num1, num2;
    std::cout << "Введите два числа: ";
    std::cin >> num1 >> num2;

    std::cout << "НОД этих чисел: " << findNOD(num1, num2) << std::endl;
}