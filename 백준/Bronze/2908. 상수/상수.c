#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	int cpn1, cpn2;
	int n1, n2;
	scanf("%d %d", &n1, &n2);

	cpn1 = n1 % 10 * 100 + n1 / 10 % 10 * 10 + n1 / 100;
	cpn2 = n2 % 10 * 100 + n2 / 10 % 10 * 10 + n2 / 100;

	if (cpn1 > cpn2)
		printf("%d", cpn1);
	else printf("%d", cpn2);
	return 0;
}
