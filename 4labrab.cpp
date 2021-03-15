#include <iostream>
#include <cmath>

using namespace std;

int calculations(int a);
int value();

int main(){

	setlocale(LC_ALL, "Ru");
	short x = value();
	double ch = calculations(x);
	cout << "Гиперболический косинус ch(" << x << ") = " << ch << endl;

}
int value(){

	while (true){

		cout << "Введите x = ";
		short x;
		cin >> x;

		if (cin.fail()){

			cin.clear();
			cin.ignore(10, '\n');
			cout << "Введено не корректное значение " << endl;
		}
		else{
			return x;
		}
	}
}

int calculations(int a){

	double res = 0;
	const unsigned short n = 2;

	for (int i = 0; i < n; i++){

		 res += (pow(a, 2 * i)) / (2 * i);
	}
	return res;
}
