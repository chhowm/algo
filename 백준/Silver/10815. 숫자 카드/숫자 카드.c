#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b)
{
	int x = *(int*)a;
	int y = *(int*)b;

	if (x > y) return 1;
	else if (x < y)return -1;
	else return 0;
}

int binary_search(int* arr, int size, int target)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == target) return 1;
		else if (arr[mid] < target) left = mid + 1;
		else right = mid - 1;
	}
	return 0;
}

int main()
{
	int N, M;
	scanf("%d", &N);
	int* cards = (int*)malloc(sizeof(int) * N);
	
	int i, j;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &cards[i]);
	}
	
	scanf("%d", &M);
	int* cmpCards = (int*)malloc(sizeof(int) * M);
	for (i = 0; i < M; i++)
	{
		scanf("%d", &cmpCards[i]);
	}

	qsort(cards, N, sizeof(int), cmp);
	for (i = 0; i < M; i++)
	{
		if (binary_search(cards, N, cmpCards[i]))
		{
			printf("1 ");
		}
		else printf("0 ");
	}
	free(cards);
	free(cmpCards);
	return 0;
}