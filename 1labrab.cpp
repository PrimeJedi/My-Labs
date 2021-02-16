/*
	Author: Быков Сергей

	Group:СБС-001-О-01

	Task#:1.5

	Discription: Написать программу, которой вычисляется подлётное расстояние S до объекта, на котором производится сбрасывание бомбы.
*/

#include<iostream>
#include<math.h>

using namespace std;

double check_height()
{
	while (true)
	{
		cout << "Введите высоту в метрах : ";
		int height;
		cin >> height;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Введено не корректное значение, повторите попытку\n";
		}
		else			
			return height;

	}
}

double check_speed()
{
	while (true)
	{
		cout << "Введите скорость в км/ч :";
		double speed;
		cin >> speed;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Введено не корректное значение,повторите попытку \n";
		}
		else
			return speed;
	}	
}

int main()
{
	setlocale(LC_ALL, "Russian");

	double height = check_height();
	double speed = check_speed();
	const double g = 10; // Константа свободного падения
	double time = sqrt((2 * height) / g);
	double distance = speed * time;
	cout << "Подлётное расстояние до объекта = " << distance <<" метров"<< endl;
}
