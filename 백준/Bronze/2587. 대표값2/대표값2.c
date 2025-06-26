#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sortAscending(int* arr, int size)
{
	int i,j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int calculateAverage(int* arr, int size)
{
	int sum = 0;
	int i;
	for (i = 0; i < size; i++)
	{
		sum += *(arr + i);
	}
	return sum / size;
}

int calculateMedian(int* arr, int size)
{
	int medianIndex = size / 2;
	return *(arr + medianIndex);
}

int main()
{
	int numArray[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &numArray[i]);
	}
	int size = sizeof(numArray) / sizeof(numArray[0]);
	
	sortAscending(numArray, size);
	printf("%d\n", calculateAverage(numArray, size));
	printf("%d\n", calculateMedian(numArray, size));

	return 0;
}