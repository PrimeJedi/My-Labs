/*
	Author: Быков Сергей

	Group:СБС-001-О-01

	Task#: 3.5

	Discription: Написать программу для вычисления определителя матрицы
*/

#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");

	srand(time(NULL));

	int matrix[3][3];
	for (int i = 1; i < 3 + 1; i++)
	{
		for (int j = 1; j < 3 + 1; j++)
		{
			matrix[i][j] = rand() % 10;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	int det;
	int b, c, d;

	b = matrix[1][1] * ((matrix[2][2] * matrix[3][3]) - (matrix[2][3] * matrix[3][2]));
	c = matrix[1][2] * ((matrix[2][1] * matrix[3][3]) - (matrix[2][3] * matrix[3][1]));
	d = matrix[1][3] * ((matrix[2][1] * matrix[3][2]) - (matrix[2][2] * matrix[3][1]));
	det = b - c + d;
	cout << "Определитель матрицы =" << det << endl;
	return 0;
}
