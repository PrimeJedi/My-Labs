#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");

	char str[100];
	cout << "Введите предложение которое хотите написать наоборот" << endl;
	//cin.ignore(32767, '\n');
	gets(str);
	for (int i = 100 - 1; i >= 0; i--)
	{
		cout << str[i];
	}
	cout << endl;
}
