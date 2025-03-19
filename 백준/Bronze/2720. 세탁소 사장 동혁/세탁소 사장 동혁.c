#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	int Q=25, D=10, N=5, P=1;
	int modulas;

	int t, c;
	scanf("%d", &t);

	for (i = 0; i < t; i++)
	{
		scanf("%d", &c);
		printf("%d ", c / Q);
		modulas = c % Q;

		printf("%d ", modulas / D);
		modulas %= D;

		printf("%d ", modulas / N);
		modulas %= N;

		printf("%d ", modulas / P);
	}



	return 0;
}