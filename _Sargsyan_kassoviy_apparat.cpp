#include <iostream>
#include <vector>
int main()
{
	int vopros = 0;
	int summa = 0;
	int summa1 = 0;
	int max = 0;
	int min = 0;
	std::vector<int>dzuk;
	do
	{
		std::cout << "vvesti summu - (1) \n" << "vivd spiska prodaj - (2) \n" << "otmenit pasledniyu prodaju - (3) \n" << "vvesti otchyot - (4) \n" << "max min - (5) \n" << "konec programmi - (6) \n"; std::cin >> vopros;

		switch (vopros)
		{
		case 1: {
			std::cout << "vvedite summu - (1) \n" << "\n"; std::cin >> summa;
			dzuk.push_back(summa);
			system("cls");
			break;
		}
		case 2: {
			system("cls");
			for (int i = 0; i < dzuk.size(); i++)
			{
				std::cout << "nomer prodaji - " << i + 1 << "    " << i + 1 << "-oya summa - " << dzuk.at(i) << "\n" << "\n";
			}
			break; }
		case 3: {
			system("cls");
			dzuk.pop_back();
			std::cout << "posledniya prodaja otmenena\n" << "\n";
			break; }
		case 4: {system("cls");
			for (int i = 0; i < dzuk.size(); i++)
			{
				summa1 += dzuk.at(i);
			}
			std::cout << "kolichestvo prodaj - " << dzuk.size() << "    summa prodaj - " << summa1 << "\n" << "\n";
			break; }
		case 5: 
		{
		system("cls");
		min = max = dzuk.front();

			for (int i = 0; i < dzuk.size() ; i++)
			{
				if (min > dzuk.at(i)) {
					min = dzuk.at(i);
				}
				if (max < dzuk.at(i)) {
					max = dzuk.at(i);
				}

			}
				std::cout << "min - " << min << "\n" << "max - " << max << "\n";
				break;
		}
		case 6: {
			std::cout << "vi pakinuli pragrammu  (-_-) ";
			exit(0);
			break; }
		}
	} while (vopros != 6);
	return 0;
}
