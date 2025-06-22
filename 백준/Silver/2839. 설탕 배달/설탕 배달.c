#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int max = n / 5;
	int i,j=0;
	int flag = 0;
	for (i = max; i >= 0; i--)
	{
		for (j = 0; j < 1000; j++)
		{
			if (5 * i + 3 * j == n)
			{
				printf("%d\n", i + j);
				flag = 1;
				break;
			}
			else if (5 * i + 3 * j > n)
			{
				break;
			}
		}
		if (flag == 1) break;
	}
	if (flag == 0)
	{
		printf("-1\n");
	}
	return 0;
}