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
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = rand() % 10;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	int det;
	int b, c, d;

	b = matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1]));
	c = matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0]));
	d = matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0]));
	det = b - c + d;
	cout << "Определитель матрицы =" << det << endl;
	return 0;
}
