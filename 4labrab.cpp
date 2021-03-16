/*
	Author: Быков Сергей

	Group:СБС-001-О-01

	Task#: 4.5

	Discription: Написать программу, которая вычисляет гиперболический косинус
*/
#include <iostream>
#include <cmath>

using namespace std;

int calculations(int a);
int value();
int factorial(int j);

int main() {

	setlocale(LC_ALL, "Ru");
	short x = value();
	double ch = calculations(x);
	cout << "Гиперболический косинус ch(" << x << ") = " << ch << endl;

}
int value() {

	while (true) {

		cout << "Введите x = ";
		short x;
		cin >> x;

		if (cin.fail()) {

			cin.clear();
			cin.ignore(10, '\n');
			cout << "Введено не корректное значение " << endl;
		}
		else {
			return x;
		}
	}
}

int calculations(int a) 
{

	double res = 1;
	const unsigned short n = 5;
	int res_factorial = factorial(n);

	for (int i = 0; i < n; i++) 
			res += pow(a, 2 * i) / (2 * res_factorial);
	return res;
}
int factorial(int j)
{
	j = 5;
	int factorial = 1;
	for (int i = 0; i < j; i++)
	{
		factorial *= i + 1;
	}
	return factorial;
}
