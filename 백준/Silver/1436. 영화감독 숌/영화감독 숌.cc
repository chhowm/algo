#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int cnt = 0;
	int num = 666;

	while (true)
	{
		if (to_string(num).find("666") != string::npos)
		{
			cnt++;
			if (cnt == n)
			{
				cout << num << '\n';
				break;
			}
		}
		num++;
	}
	return 0;
}