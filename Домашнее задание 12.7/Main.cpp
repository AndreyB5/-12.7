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
		cout << "������� ������: " << endl;
		cin >> string;
		cout << "������� ����� ��� �������� ��������� ������: " << endl;
		cin >> k;
		if (IsKPeriodic(string, k))
			cout << "������ " << string << " ������ " << k << "." << endl;
		else
			cout << "������ " << string << " �� ������ " << k << "." << endl;
	}

	return 0;

}
