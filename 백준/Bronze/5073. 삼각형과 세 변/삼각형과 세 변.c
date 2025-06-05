#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A, B, C;
	int max = 0;
	while (1)
	{
		scanf("%d %d %d", &A, &B, &C);
		if (A == 0) return 0;

		if (A > B && A > C)
		{
			if (A >= B + C)
			{
				printf("Invalid\n");
				continue;
			}
		}
		else if (B > A && B > C)
		{
			if (B >= A + C)
			{
				printf("Invalid\n");
				continue;
			}
		}
		else if (C > B && C > A)
		{
			if (C >= B + A)
			{
				printf("Invalid\n");
				continue;
			}
		}

		if (A == B && B == C) printf("Equilateral\n");
		else if (A != B && B != C && A != C) printf("Scalene\n");
		else printf("Isosceles\n");
	}
	return 0;
}