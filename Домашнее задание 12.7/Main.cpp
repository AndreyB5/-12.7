#include <iostream>
#include "Function IsKPeriodic.h"
using namespace std;

int main()
{
	system("chcp 1251");
	string string;
	int k = 0;
	while (string != "exit")
	{
		cout << "Введите строку: " << endl;
		cin >> string;
		cout << "Введите число для проверки кратности строки: " << endl;
		cin >> k;
		if (IsKPeriodic(string, k))
			cout << "Строка " << string << " кратна " << k << "." << endl;
		else
			cout << "Строка " << string << " не кратна " << k << "." << endl;
	}

	return 0;

}
