#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void bubble(int* array, int sizeOfArray)
{
	int i, j;
	for (i = 0; i < sizeOfArray - 1; i++)
	{
		for (j = 0; j < sizeOfArray - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	return;

}

int main()
{
	int n;
	scanf("%d", &n);

	int* numArray = (int*)malloc(sizeof(int) * n);
	if (numArray == NULL)
	{
		printf("malloc failed\n");
		return -1;
	}
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &numArray[i]);
	}
	bubble(numArray, n);
	for (i = 0; i < n; i++)
	{
		printf("%d\n", numArray[i]);
	}
	return 0;
}