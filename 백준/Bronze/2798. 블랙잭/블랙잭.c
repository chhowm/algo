#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	int* numbers = (int*)malloc(sizeof(int) * N);
	if (numbers == NULL)
	{
		fprintf(stderr, "fail malloc\n");
		return 1;
	}
	int sum, ans=0;
	int i,j,k;
	for (i = 0; i < N; i++)
	{
		scanf("%d", numbers + i);
	}

	for (i = 0; i < N-2; i++)
	{
		for (j = i + 1; j < N - 1; j++)
		{
			for (k = j + 1; k < N; k++)
			{
				sum = *(numbers + i) + *(numbers + j) + *(numbers + k);
				if (sum > ans && sum <= M)
				{
					ans = sum;
				}
			}
		}
	}
	free(numbers);
	printf("%d", ans);
}