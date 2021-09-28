#include <iostream>
#include <string>
using namespace std;

int fact(int N)
{
	if (N == 0) 
		return 1; 
	else 
		return N * fact(N - 1); 
}


void task1(int number)
{
	//int number;
	string triangle;
	//cin >> number;
	for (int i = 0; i < number + 1; i += 1)
	{
		triangle += to_string(i);

		cout << triangle << endl;
	}

	return;
}


void task2(int n)
{
	int C;
    // int n;
	//cin >> n;

	for (int k = 1; k < n; k += 1)
	{
		C = fact(n) / (fact(k) * fact(n - k));
		cout << C << endl;
	}
	return;
}

void task3(int cur_number)
{
	float sum = 0;
	float i = 0;
	//int cur_number;
	//cin >> cur_number;
	while (cur_number != 0) {
		sum += cur_number;
		cin >> cur_number;
		i += 1;
	}

	sum /= i;
	cout << "среднее арифметическое: " << sum << "\n" << endl;

	return;

}


int main()
{
	setlocale(LC_ALL, "Russian");
	int choice = 0;
	while (true) 
	{





		cout << "Что вы хотите выполнить? \n" << endl << "1. числовой треугольник\n" << "2. биноминальные коэффициенты\n" << "3. среднее арифметическое точек\n" << "4. выход\n" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			int number;
			cin >> number;
			task1(number);
			break;
		}
		case 2:
		{
			int n;
			cout << "введите n\n" << endl;
			cin >> n;
			task2(n);
			break;
		}

		case 3:
		{
			cout << "введите точки\n" << "символ конца ввода = 0\n" << endl;
			int cur_number;
			cin >> cur_number;
			task3(cur_number);
		
			break;
		}
		default:
		{
			return 0;
		}
		}
	}
}
