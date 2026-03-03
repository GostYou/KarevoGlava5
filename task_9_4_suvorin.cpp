#include<iostream>
int main() {
	system("chcp 1251");
	int length;
	std::cout << "Введите размер массива: "; std::cin >> length;

	int* arr = new int[length];
	if (length>1)
	{
		std::cout << "Введите элементы массива:\ns";
		for (size_t i = 0; i < length; i++)
		{
			int number;
			std::cout << "arr["<<i<<"] = "; std::cin >> number;
			arr[i] = number;
		}
		int choice;
		std::cout << "1)Отсортировать по возрастанию\n2)Отсортировать по убыванию\n>_:"; std::cin >> choice;
		if (choice == 1) {
			for (int i = 0; i < length - 1; i++)
			{
				for (int j = 0; j < length-1; j++) {
					if (arr[j] > arr[j + 1])
					{
						std::swap(arr[j], arr[j + 1]);
					}

				}
			}
		}

		if (choice == 2) {
			for (size_t i = 0; i < length -1; i++)
			{
				for (size_t j = 0; j < length-1; j++)
				{
					if (arr[j] < arr[j+1])
					{
						std::swap(arr[j], arr[j+1]);
					}
				}
			}
		}

		for (size_t i = 0; i < length; i++)
		{
			std::cout << arr[i] << " ";
		}

	}
	else {
		std::cout << "Нельзя рзамер меньше одного!";
	}



}