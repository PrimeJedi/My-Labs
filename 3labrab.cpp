/*
	Author: Быков Сергей

	Group:СБС-001-О-01

	Task#: 3.5

	Discription: Написать программу для вычисления определителя матрицы
*/

#include<iostream>
#include<math.h>
#include<ctime>
using namespace std;

void int_matrix()
{
	const int n = 3;
	long int a[n][n];


	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			a[i][j] = rand() % 100;
		}
	}

	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	srand(time(0));
}

int main()
{
	setlocale(LC_ALL, "Ru");

	int_matrix();
	int opredelitel;
	int b, c, d;
	b = a[1][1] * ((a[2][2] * a[3][3]) - (a[2][3] * a[3][2]));
	c = a[1][2] * ((a[2][1] * a[3][3]) - (a[2][3] * a[3][1]));
	d = a[1][3] * ((a[2][1] * a[3][2]) - (a[2][2] * a[3][1]));
	opredelitel = b - c + d;
	cout << opredelitel;

}
