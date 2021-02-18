/*
	Author: Быков Сергей

	Group:СБС-001-О-01

	Task#: 2.5

	Discription: Написать программу для вычисления логарифма
*/

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

double argument()
{
	while (true)
	{
		cout << "Введите значение аргумента  0 < x < 1: ";
		double x;
		const int a = 1;
		cin >> x;

		if ((cin.fail()) || (x <= 0) || (x >= 1))
		{
			cin.clear();
			cin.ignore(32676, '\n');
			cout << "Не коректный ввод, повторите ввод "<< endl;
		}
		else
		{
			return x;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	double x = argument();
	const int n = 10;
	int i;
	double summa = 0;

	for (i = 1; i <= n; i++)
	{
		summa += (pow(-1, n) * pow(x, 2 * n + 1)) / (2 * n + 1);
	}
	cout << "ln(1 +" <<x<< ") ="<< summa <<endl;
}

