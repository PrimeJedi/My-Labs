
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter your word:";
	string word;
	char str;
	getline(cin, word);

	for (size_t i = 0, e = word.size(); i != e; i++)
	{			
		cout <<word[word.size() - i];
	}
	cout << endl;
}
