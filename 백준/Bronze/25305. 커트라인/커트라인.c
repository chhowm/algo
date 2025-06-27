#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, k;
	scanf("%d %d", &n, &k);
	int* scores = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &scores[i]);
	}

	for (int i = 0 ; i < n-1 ; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (scores[j] > scores[j + 1])
			{
				int temp = scores[j];
				scores[j] = scores[j + 1];
				scores[j + 1] = temp;
			}
		}
	}

	printf("%d\n", scores[n - k]);
	free(scores);
	return 0;
}