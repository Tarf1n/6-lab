#include <clocale>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");
		
	string str;
	setlocale(LC_ALL, "Ru");
	cout << "Введите строку: " << endl;
	getline(cin, str);
	for (int i = 0; i < str.length() - 1; i++)
	{
		for (int j = 0; j < str.length() - i - 1; j++)
		{
			if (str[j] > str[j+1])
			{
				char r = str[j];
				str[j] = str[j + 1];
				str[j + 1] = r;
			}
		}
	}
	cout << "Отсортированная по возрастанию строка: " << endl;
	cout << str << endl;
	return 0;
}