#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>
#include<Windows.h>

using namespace std;
// 2.	**Написать функцию, которая приводит строку к нижнему регистру.
void lower(char *str)
{
	while (*str != '\0')
	{
		*str = (char)tolower(*str);
		str++;
	}
}
// 1.	***Написать функцию, которая определяет является ли строка палиндромом
	// (т.е. строкой, которую можно читать и слева направо, и справа налево:
	// «А роза упала на лапу Азора», «Аргентина манит негра», «Я ем змея»).
	// Рекомендации:
	// Из строки предварительно нужно удалить пробелы и привести ее к одному регистру.
void if_palindrome(char *str) {
	char str2[100];

	int j = 0;
	char *p = str;
	while (*p != '\0')
	{
		if (*p != ' ')
			str2[j++] = *p;
		p++;
	}

	str2[j] = '\0';
	cout << str2 << endl; // without spaces

	lower(str2);
	cout << str2 << endl; // lower register

	bool f = true;
	for (int i = 0; i < strlen(str2) / 2; i++)
	{
		if (str2[i] != str2[strlen(str2) - i - 1])
			f = false;
	}
	if (f) cout << "Palindrome" << endl << endl;
	else cout << "Not a palindrome" << endl << endl;
}


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");

	int tn = 0;
start:
	cout << "введите номер задания: ";
	cin >> tn; cin.get();

if (tn == 1)
	{
	char str[100] = "А роза упала на лапу Азора";
	//char str[100] = "Аргентина манит негра";
	//char str[100] = "Я ем змея";
	// char str[100] = "А роза НЕ упала на лапу Азора";
	if_palindrome(str);
	}
else if (tn == 2)
	{
	char str[100] = "HELLO WORLD! Hello World! hellO worlD";
	lower(str);

	cout << str << endl << endl;
	}
goto start;

system("pause");
return 0;
}
