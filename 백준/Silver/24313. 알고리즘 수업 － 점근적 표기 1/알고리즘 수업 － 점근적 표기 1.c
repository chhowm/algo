#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a1, a0;
	int c;
	int n0;
	scanf("%d %d %d %d", &a1, &a0, &c, &n0);

	// a1*n0+a0 <= c*n0
	int i;
	int flag = 1;

	if (a1 > c)
	{
		flag = 0;
	}
	else if (a1 == c && a0 > 0)
	{
		flag = 0;
	}
	else if (a1 < c)
	{
		for (i = n0; i <= 100; i++)
		{
			if (a1 * i + a0 > c * i)
			{
				flag = 0;
			}
		}
	}
	printf("%d", flag);
}