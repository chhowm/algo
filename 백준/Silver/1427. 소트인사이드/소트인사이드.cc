#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int inputNum;
	cin >> inputNum;
	
	int numArray[10] = { 0 };
	int i = 0;
	while (inputNum > 0)
	{
		numArray[i++] = inputNum % 10;
		inputNum /= 10;
	}
	sort(numArray, numArray + i,greater<int>());
	for (int j = 0; j < i; j++)
	{
		cout << numArray[j];
	}
	
	return 0;
}