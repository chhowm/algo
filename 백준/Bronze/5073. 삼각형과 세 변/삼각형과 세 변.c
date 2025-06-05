#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A, B, C;
	int max, sum;
	while (1)
	{
		scanf("%d %d %d", &A, &B, &C);
		if (A == 0) break;

		max = A;
		if (B > max) max = B;
		if (C > max) max = C;
		sum = A + B + C - max;
		
		if (max >= sum)
		{
			printf("Invalid\n");
			continue;
		}

		if (A == B && B == C) printf("Equilateral\n");
		else if (A == B || B == C || A == C) printf("Isosceles\n");
		else printf("Scalene\n");
	}
	return 0;
}