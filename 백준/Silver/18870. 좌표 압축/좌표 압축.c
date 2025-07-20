#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int idx;
}crd;

int cmp(const void* a, const void* b)
{
	const crd* A = (const crd*)a;
	const crd* B = (const crd*)b;

	return A->x - B->x;
}

int main()
{
	int n;
	scanf("%d", &n);

	crd* coords = (crd*)malloc(sizeof(crd) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &coords[i].x);
		coords[i].idx = i;
	}

	qsort(coords, n, sizeof(crd), cmp);
	int* ans = (int*)malloc(sizeof(int) * n);
	int cmp = 0;
	ans[coords[0].idx] = 0;
	for (int i = 1; i < n; i++)
	{
		if (coords[i].x != coords[i - 1].x)
		{
			cmp++;
		}
		ans[coords[i].idx] = cmp;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", ans[i]);
	}
	free(coords);
	free(ans);
	return 0;
}