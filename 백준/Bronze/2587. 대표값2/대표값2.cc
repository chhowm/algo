#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[5];
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
		sum += arr[i];
	}

	int average = sum / 5;
	sort(arr, arr + 5);
	int median = arr[2];
	cout << average << endl;
	cout << median << endl;
	return 0;
}