#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> numArray(n);
	for (int i = 0; i < n; i++)
	{
		cin >> numArray[i];
	}

	sort(numArray.begin(), numArray.end());
	for (int i = 0; i < n; i++)
	{
		cout << numArray[i] << '\n';
	}

	return 0;
}