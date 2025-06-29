#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int main()
{
	int n;
	scanf("%d", &n);

	int* numArray = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", (numArray + i));
	}

	qsort(numArray, n, sizeof(int), compare);
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", *(numArray + i));
	}
	free(numArray);
	return 0;
}