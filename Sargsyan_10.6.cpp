#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int vibr1;
    int vibr2;
    bool exit = false;

    while (!exit) {
        cout << "МЕНЮ 1 - ВЫБОР ТИПА ДАННЫХ:\n";
        cout << "1. int \n";
        cout << "2. float \n";
        cout << "3. double \n";
        cout << "0. Выход из программы\n";
        cout << "Ваш выбор - ";
        cin >> vibr1;

        if (vibr1 == 0) {
            cout << "Работа завершена.\n";
            exit = true;
        }
       
        if (vibr1 == 1) {
            int a, b;
            cout << "Введите два целых числа - \n";
            cout << "Первое число - ";
            cin >> a;
            cout << "Второе число - ";
            cin >> b;
            bool backToTypeMenu = false;
            while (!backToTypeMenu) {
                cout << "1 - Поиск максимального\n";
                cout << "2 - Среднее арифметическое\n";
                cout << "3 - Модуль суммы\n";
                cout << "4 - Вывод целой части суммы\n";
                cout << "0 - Вернуться к выбору типа\n";
                cout << "Ваш выбор - ";
                cin >> vibr2;

                if (vibr2 == 1) {
                    if (a > b) {cout << "Максимальное число: " << a << endl;}
                    else {cout << "Максимальное число: " << b << endl;}
                }
                else if (vibr2 == 2) {
                    double average = a + b / 2.0;
                    cout << "Среднее арифметическое: " << average << "\n";
                }
                else if (vibr2 == 3) {
                    double sum = a + b;
                    if (sum >= 0) {cout << "Модуль суммы: " << sum << endl;}
                    else {cout << "Модуль суммы: " << -sum << endl;}
                }
                else if (vibr2 == 4) {
                    double sum = a + b;
                    long long summ1 = sum;
                    cout << "Целая часть: " << summ1 << endl;
                }
                else if (vibr2 == 0) {
                    backToTypeMenu = true;
                }
                else {
                    cout << "Неверный выбор!\n";
                }
            }
        }
        else if (vibr1 == 2) {
            float a, b;
            cout << "Введите два числа (float):\n";
            cout << "Первое число: ";
            cin >> a;
            cout << "Второе число: ";
            cin >> b;

        
            bool backToTypeMenu = false;
            while (!backToTypeMenu) {
                cout << "1 - Поиск максимального\n";
                cout << "2 - Среднее арифметическое\n";
                cout << "3 - Модуль суммы\n";
                cout << "4 - Вывод целой части суммы\n";
                cout << "0 - Вернуться к выбору типа\n";
                cout << "Ваш выбор: ";
                cin >> vibr2;

                if (vibr2 == 1) {
                    if (a > b) {cout << "Максимальное число: " << a << endl;}
                    else {cout << "Максимальное число: " << b << endl;}
                }
                else if (vibr2 == 2) {
                    double average = (a + b) / 2.0;
                    cout << "Среднее арифметическое: " << average << endl;
                }
                else if (vibr2 == 3) {
                    double sum = a + b;
                    if (sum >= 0) {cout << "Модуль суммы: " << sum << endl;}
                    else {cout << "Модуль суммы: " << -sum << endl;}
                }
                else if (vibr2 == 4) {
                    double sum = a + b;
                    long long summm = sum;
                    cout << "Целая часть суммы: " << summm << endl;
                }
                else if (vibr2 == 0) {backToTypeMenu = true;}

                else {cout << "Неверный выбор!\n";}
            }
        }
        else if (vibr1 == 3) {
            double a, b;
            cout << "Введите два числа (double):\n";
            cout << "Первое число: ";
            cin >> a;
            cout << "Второе число: ";
            cin >> b;

            bool backToTypeMenu = false;
            while (!backToTypeMenu) {
                cout << "1 - Поиск максимального\n";
                cout << "2 - Среднее арифметическое\n";
                cout << "3 - Модуль суммы\n";
                cout << "4 - Вывод целой части суммы\n";
                cout << "0 - Вернуться к выбору типа\n";
                cout << "Ваш выбор: ";
                cin >> vibr2;

                if (vibr2 == 1) {
                   
                    if (a > b) {cout << "Максимальное число: " << a << endl;}
                    else {cout << "Максимальное число: " << b << endl;}
                }
                else if (vibr2 == 2) {
                    double average = (a + b) / 2.0;
                    cout << "Среднее арифметическое: " << average << endl;
                }
                else if (vibr2 == 3) {
                    double sum = a + b;
                    if (sum >= 0) {cout << "Модуль суммы: " << sum << endl;}
                    else {cout << "Модуль суммы: " << -sum << endl;}
                }
                else if (vibr2 == 4) {
                    double sum = a + b;
                    long long summm = sum;
                    cout << "Целая часть суммы: " << summm << endl;
                }
                else if (vibr2 == 0) {backToTypeMenu = true;}
                else {cout << "Неверный выбор!\n";}
            }
        }
    }

    return 0;
}