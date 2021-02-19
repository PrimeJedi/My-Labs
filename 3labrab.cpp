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

void get_matrix(  )
{
	int n = 3, m = 3; 
	int matrix[n][m];
	
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < m + 1; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}
	srand(time(0));
}
void print_matrix()
{
	int n = 3, m = 3;
	int matrix[n][m];
	
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < m+ 1; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	srand(time(0));
}
int main()
{
	setlocale(LC_ALL, "Ru");

	int n = 3, m = 3;
	int matrix[n][m];
	long long  matrix_chek = get_matrix();
	long long  matrix_ pr = print_matrix();
	int det;
	int b, c, d;
	b = matrix[1][1] * ((matrix[2][2] * matrix[3][3]) - (matrix[2][3] * matrix[3][2]));
	c = matrix[1][2] * ((matrix[2][1] * matrix[3][3]) - (matrix[2][3] * matrix[3][1]));
	d = matrix[1][3] * ((matrix[2][1] * matrix[3][2]) - (matrix[2][2] * matrix[3][1]));
	det = b - c + d;
	cout <<"Определитель матрицы ="<< det <<endl;
	system("pause");
}
