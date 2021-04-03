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
