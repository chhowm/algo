#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x[3], y[3];
	int i;
	
	for (i = 0; i < 3; i++)
	{
		scanf("%d %d", x + i, y + i);
	}

	if (*x == *(x + 1))
	{
		printf("%d ", *(x + 2));
	}
	else if (*x == *(x + 2))
	{
		printf("%d ", *(x + 1));
	}
	else if (*(x + 1) == *(x + 2))
	{
		printf("%d ", *x);
	}
	
	if (*y == *(y + 1))
	{
		printf("%d ", *(y + 2));
	}
	else if (*y == *(y + 2))
	{
		printf("%d ", *(y + 1));
	}
	else if (*(y + 1) == *(y + 2))
	{
		printf("%d ", *y);
	}
	return 0;
}