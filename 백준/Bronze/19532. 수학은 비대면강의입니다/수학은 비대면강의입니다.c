#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	int i,j;
	for (i = -999; i <= 999; i++)
	{
		for (j = -999; j <= 999; j++)
		{
			if (a * i + b * j == c && d * i + e * j == f)
			{
				printf("%d %d\n", i, j);
				return 0;
			}
		}
	}
	return 0;
}