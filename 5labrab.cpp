/*
	Author: Быков Сергей

	Group:СБС-001-О-01

	Task#: 5.5

	Discription: Написать программу, которая выводит строку в обратном порядке
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter your word:";
	string word;
	getline(cin, word);
	for (size_t i = 0, e = word.size() + 1; i != e; i++)
	{
		//cout << word[i] << endl;
		cout << word[word.size()- i];
	}	

	cout << endl;
}
