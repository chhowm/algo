#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int inputNum, sum = 1;
	int i;
	scanf("%d", &inputNum);

	for (i = 0; ; i++)
	{
		if (inputNum >= sum && inputNum <= sum + 6 * i) break;
		sum += 6 * i;
	}

	printf("%d", i + 1);
}