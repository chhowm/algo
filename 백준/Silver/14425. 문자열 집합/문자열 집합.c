#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 501

int cmp(const void* a, const void* b)
{
	return strcmp(*(char**)a, *(char**)b);
}

int binanary_search(char** arr, int start, int end, char* target)
{
	end -= 1;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		int ret = strcmp((arr[mid]), target);
		if (ret == 0)
		{
			return 1;
		}
		else if (ret < 1)
		{
			start = mid + 1;
		}
		else end = mid - 1;
	}
	return 0;
}

int main()
{
	int N, M;
	scanf("%d  %d", &N, &M);

	char** setS = (char**)malloc(N * sizeof(char*));
	char** check = (char**)malloc(M * sizeof(char*));

	int cnt = 0; // 집합 S에 포함된 문자열의 갯수 즉 정답
	int i;

	for (i = 0; i < N; i++) 
	{
		setS[i] = (char*)malloc(MAX_LEN);
		scanf("%s", setS[i]);
	}
	
	for (i = 0; i < M; i++)
	{
		check[i] = (char*)malloc(MAX_LEN);
		scanf("%s", check[i]);
	}

	qsort(setS, N, sizeof(char*), cmp);
	
	for (i = 0; i < M; i++)
	{
		if (binanary_search(setS, 0, N, check[i])) cnt++;
	}

	printf("%d", cnt);
	for (i = 0; i < N; i++) free(setS[i]);
	for (i = 0; i < M; i++) free(check[i]);
	free(setS);
	free(check);
}