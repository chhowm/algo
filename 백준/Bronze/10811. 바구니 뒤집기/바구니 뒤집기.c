#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int N, M;
	int temp;
	int i, j, k=0;
	int first, last;
	
	scanf("%d %d", &N, &M);
	
	int *org_num = malloc(N * sizeof(int));

	for (i = 0; i < N; i++)
	{
		org_num[i] = i+1;
	}
	
	for (i = 0; i < M; i++)
	{
		scanf("%d %d", &first, &last);
		for (j = first; j <= last; j++)
		{
			if (j >= last - k) break;
			temp = org_num[j - 1];
			org_num[j - 1] = org_num[last - 1 - k];
			org_num[last - 1 - k] = temp;
			k++;
		}
		k = 0;
	}
	
	for (i = 0; i < N; i++)
	{
		printf("%d ", org_num[i]);
	}
	
	free(org_num);
	return 0;
}
