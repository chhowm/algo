#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int inputNum;
	scanf("%d", &inputNum);

	while (inputNum > 1)
	{
		for (int i = 2; i <= inputNum; i++)
		{
			if (inputNum % i == 0)
			{
				inputNum /= i;
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}