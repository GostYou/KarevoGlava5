#include<iostream>
int main() {
	system("chcp 1251");
	int arr[7][7];

	int min, max;
	
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++ ) {
			arr[i][j] = rand() % 100;
			std::cout << arr[i][j]<< "\t";
		}
		std::cout << "\n";
	}
	min = max = arr[0][0];
	for (int i = 0; i < 7; i++)
	{
		for(int j =0;j <7; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
			if (arr[i][j] > max) max = arr[i][j];
		}
	}

	std::cout << "max = " << max << "\nmin = " << min << std::endl;

	std::cout << "Введите индекс элемента (строка, столбец), который будет умножен на 2: ";
	int stroka, stolb; std::cin >> stroka; std::cin >> stolb;
	
	if (stroka > 6 || stroka <0 || stolb > 6 || stolb < 0)
	{
		std::cout << "Вы ввели некорректный индекс";
	}
	else {

		arr[stolb][stroka] *= 2;

		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++) {
				std::cout << arr[i][j] << "\t";
			}
			std::cout << "\n";
		}

	}

	

}