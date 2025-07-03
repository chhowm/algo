#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct peopleInfo
{
	int age;
	char name[101];
	int index;
}info;

int compare(const void* a, const void* b)
{
	const info* infoA = (const info*)a;
	const info* infoB = (const info*)b;

	if (infoA->age == infoB->age) return (infoA->index - infoB->index);
	else return (infoA->age - infoB->age);
}

int main()
{
	int N;
	scanf("%d", &N);
	info* infoArr = (info*)malloc(sizeof(info) * N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %s", &infoArr[i].age, infoArr[i].name);
		infoArr[i].index = i;
	}
	
	qsort(infoArr, N, sizeof(infoArr[0]), compare);

	for (int i = 0; i < N; i++)
	{
		printf("%d %s\n", infoArr[i].age, infoArr[i].name);
	}
	free(infoArr);
	return 0;
}