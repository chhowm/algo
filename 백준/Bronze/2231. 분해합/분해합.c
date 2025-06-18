#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);

	int ans1_flag=0;
	int i;
	for (i = 1; i < n; i++)
	{
		int sum = i;
		int temp = i;
		sum += temp / 1000000; temp %= 1000000;
		sum += temp / 100000; temp %= 100000;
		sum += temp / 10000; temp %= 10000;
		sum += temp / 1000; temp %= 1000;
		sum += temp / 100; temp %= 100;
		sum += temp / 10; temp %= 10;
		sum += temp;
		if (sum == n)
		{
			ans1_flag = i;
			break;
		}
	}
	printf("%d", ans1_flag);
}