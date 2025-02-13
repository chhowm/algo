#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char ch[1001];
	scanf("%s", ch);
	int i;
	scanf("%d", &i);

	printf("%c", ch[i - 1]);
	return 0;
}
