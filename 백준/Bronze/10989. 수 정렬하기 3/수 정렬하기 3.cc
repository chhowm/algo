#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int countArray[10001] = { 0 };
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		countArray[temp]++;
	}

	for (int i = 1; i <= 10000; i++)
	{
		if (countArray[i] > 0)
		{
			for (int j = 0; j < countArray[i]; j++)
			{
				cout << i << '\n';
			}
		}
	}
	
	return 0;
}