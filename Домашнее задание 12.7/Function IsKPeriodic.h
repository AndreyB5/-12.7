#pragma once
#include <iostream>

bool IsKPeriodic(std::string str, int k)
{
	if (k <= 0)
		return 0;
	int size = str.size();
	if (size == k)
		return 1;
	else if (size % k != 0)
		return 0;
	std::string str0 = str.substr(0, k);
	for (int i = k; i < size; i += k)
	{
		if (str.substr(i, k) != str0)
			return 0;
	}
	return 1;
}
