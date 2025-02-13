#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i=0;
	char ch[101];
	scanf("%s", ch);

	for(i=0 ; ch[i] != 0 ; i++){}
	printf("%d", i);
}
