#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct coordinate
{
	int x;
	int y;
}coord;

int compare(const void* a, const void* b)
{
	coord temp_a = *(const coord*)a;
	coord temp_b = *(const coord*)b;
	if (temp_a.x == temp_b.x)
	{
		return temp_a.y - temp_b.y;
	}
	return temp_a.x - temp_b.x;
}

int main()
{
	int cntNum;
	scanf("%d", &cntNum);

	coord* arr = (coord*)malloc(sizeof(coord) * cntNum);
	int i;
	for (i = 0; i < cntNum; i++)
	{
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}

	qsort(arr, cntNum, sizeof(coord), compare);
	for (i = 0; i < cntNum; i++)
	{
		printf("%d %d\n", arr[i].x, arr[i].y);
	}
	return 0;
}