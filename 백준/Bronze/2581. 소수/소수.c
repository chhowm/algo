#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int inputNumM, inputNumN;
	scanf("%d %d", &inputNumM, &inputNumN);
	int array[10000] = { 0 };
	int i, j, k=0;
	int sum = 0;
	for (i=inputNumM; i<=inputNumN ; i++)
	{
		int cnt = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)	cnt++;
		}
		if (cnt == 2)
		{
			sum += i;
			array[k] = i;
			k++;
		}
	}
	if (sum == 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d\n%d", sum, array[0]);
	}
	return 0;
}