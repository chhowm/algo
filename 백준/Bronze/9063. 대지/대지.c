#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N;
	int x, y;
	int maxX=-10000, maxY=-10000;
	int minX = 10000, minY = 10000;
	int i;

	scanf("%d", &N);
	if (N == 0)
	{
		printf("0");
		return 0;
	}

	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &x, &y);
		if (x > maxX) maxX = x;
		if (y > maxY) maxY = y;
		if (x < minX) minX = x;
		if (y < minY) minY = y;
	}
	printf("%d", (maxX - minX) * (maxY - minY));
	return 0;
}