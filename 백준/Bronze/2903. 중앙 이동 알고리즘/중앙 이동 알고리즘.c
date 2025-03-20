#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);

	int start = 4, sum, startSum = 0;
	int i;

	for (i = 0; i < n; i++)
	{ 
		sum = start * 4 - ((2+startSum) * 4 - 1);

		startSum = (2 * startSum) + 1;
		start = sum;
	}
	printf("%d", sum);

	return 0;
}