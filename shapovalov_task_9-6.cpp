#include <iostream>
#include <vector>
void first() {
	std::cout << "FIRST VECTOR\n";

	std::vector<int> first_vector;
	int size = rand() % 29 + 2;
	for(int i = 0; i < size; i++)
	first_vector.push_back(rand() % 10);

	for (int i = 0; i <size; i++)
		std::cout<<first_vector.at(i)<<" ";
}
void second() {
	std::cout << std::endl<<"SECOND VECTOR\n";

	std::vector<std::vector<int>> second_vector;
	int v_size = rand() % 10 + 1;

	for (int i = 0; i < v_size; i++) {
		std::vector<int> sub_vector;

		for (int j = 0; j < v_size; j++) {
			sub_vector.push_back(rand() % 10);
		}
		second_vector.push_back(sub_vector);
	}
	for (int i = 0; i < second_vector.at(0).size(); i++) {
		std::cout << '\t' << '[' << i << ']';
	} std::cout << "\n\n";

	for (int i = 0; i < second_vector.size(); i++) {
		std::cout << '[' << i << ']' << '\t';

		for (int j = 0; j < second_vector.at(i).size(); j++) {
			std::cout << second_vector.at(i).at(j) << '\t';
		} std::cout << "\n\n";
	}
}

void third() {
	std::cout << std::endl << "THIRD VECTOR\n";

	std::vector<std::vector<int>> second_vector;
	int v_size = rand() % 10 + 1;

	for (int i = 0; i < v_size; i++) {
		std::vector<int> sub_vector;

		for (int j = 0; j < v_size; j++) {
			sub_vector.push_back(rand() % 10);
		}
		second_vector.push_back(sub_vector);
	}
	for (int i = 0; i < second_vector.at(0).size(); i++) {
		std::cout << '\t' << '[' << i << ']';
	} std::cout << "\n\n";

	for (int i = 0; i < second_vector.size(); i++) {
		std::cout << '[' << i << ']' << '\t';

		for (int j = 0; j < second_vector.at(i).size(); j++) {
			std::cout << second_vector.at(i).at(j) << '\t';
		} std::cout << "\n\n";
	}
}

int main() {
	system("chcp 1251"); system("cls"); srand(time(NULL));
	first();
	second();



	
	
	return 0;
}