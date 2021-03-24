 /*
	Author: Быков Сергей

	Group:СБС-001-О-01

	Task#: 5.5

	Discription: Написать программу, которая выводит строку задом на перёд.
*/

#include <iostream>
#include <cstring>

int main()
{
    const int n = 20;
    char str[n];
    std::cout << "Enter your word: ";
    std::cin.getline(str, n);

    for (int i = n - 1; i >= 0; i--)
    {
        std::cout << str[i];
    }
    std::cout << "\n";
}
