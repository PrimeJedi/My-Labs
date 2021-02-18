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
			cout << "Не коректный ввод, повторите ввод " << endl;
		}
		else
		{
			return x;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Ru");

	const int n = 10;
	int i;
	double  x = argument();
	double chislo = 1 + x;
	double summa = 0;

	for (i = 0; i < n; i++)
	{
		summa += ((pow(-1, i) * pow(x, 2 * i + 1)) / (2 * i + 1));
		//cout << " Шаг " << i+1 << "   Ln =" << summa << endl; эта строка для того чтобы проверить на определённых шагах работу программу
	}
	cout << "Значение ln( " << chislo << ") =" << summa << endl;
}
