/*
	Author: Быков Сергей

	Group:СБС-001-О-01

	Task#: 4.5

	Discription: Написать программу, которая вычисляет гиперболический косинус
*/
#include <iostream>
#include <cmath>

using namespace std;

double calculations(int x);
int value();
int factorial(int n);

int main() {

	setlocale(LC_ALL, "Ru");
	int x = value();
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
double calculations(int x)
{

	double res = 0;
	const unsigned short n = 2;
	double res_factorial = factorial(2*n);

	for (int i = 0; i < n; i++)
	{
		res += pow(x, 2 * i) / res_factorial;
	}
	return res;
}
int factorial(int n)
{
	if (n == 0) return 1;
	else return factorial(n - 1) * n;
}
