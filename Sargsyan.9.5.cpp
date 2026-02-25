#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    if (size <= 0) {
        cout << "Размер массива должен быть > 0" << "\n";
        return 1;
    }
    vector<int> victor(size);
    cout << "Введите " << size << " элементов массива:\n";
    for (int i = 0; i < size; i++) {
        cin >> victor[i];
    }
    cout << "\nмассив - ";
    for (int i = 0; i < victor.size(); i++) {
        cout << victor[i] << " ";
    }
    vector<bool> processed(size, false);
    bool foundDuplicates = false;

    for (int i = 0; i < size; i++) {
        if (!processed[i]) {
            int count = 1;
            for (int j = i + 1; j < size; j++) {
                if (victor[j] == victor[i]) {
                    count++;
                }
            }
            if (count > 1) {
                foundDuplicates = true;
                cout << "Значение " << victor[i] << " встречается на позициях: ";
                for (int j = 0; j < size; j++) {
                    if (victor[j] == victor[i]) {
                        cout << j << " ";
                        processed[j] = true;
                    }
                }
                cout << endl;
            }
        }
    }

    if (!foundDuplicates) {
        cout << "Повторяющихся элементов не найдено.\n";
    }
//min max
    int max = victor[0];
    int min = victor[0];

    for (int i = 1; i < size; i++) {
        if (victor[i] > max) {
            max = victor[i];
        }
        if (victor[i] < min) {
            min = victor[i];
        }
    }

    cout << "Размер массива: " << victor.size() << endl;
    cout << "Максимальный элемент: " << max << endl;
    cout << "Минимальный элемент: " << min << endl;

    vector<int> sortedVec = victor;

    for (int i = 0; i < sortedVec.size() - 1; i++) {
        for (int j = 0; j < sortedVec.size() - i - 1; j++) {
            if (sortedVec[j] > sortedVec[j + 1]) {
                int temp = sortedVec[j];
                sortedVec[j] = sortedVec[j + 1];
                sortedVec[j + 1] = temp;
            }
        }
    }

    cout << "Отсортированный массив: ";
    for (int i = 0; i < sortedVec.size(); i++) {
        cout << sortedVec[i] << " ";
    }
    cout << endl;
    vector<int> uniqueVec;

    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < i; j++) {
            if (victor[j] == victor[i]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            for (int j = i + 1; j < size; j++) {
                if (victor[j] == victor[i]) {
                    isUnique = false;
                    break;
                }
            }
        }
        if (isUnique) {
            uniqueVec.push_back(victor[i]);
        }
    }

    cout << "Массив уникальных элементов\n";
    if (!uniqueVec.empty()) {
        for (int i = 0; i < uniqueVec.size(); i++) {
            cout << uniqueVec[i] << " ";
        }
        cout << endl;
        cout << "Размер массива уникальных элементов: " << uniqueVec.size() << endl;
    }
    else {
        cout << "Массив пуст\n";
    }

    return 0;
}