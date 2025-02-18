#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char* strmulti(char* str, int multi);

int main() 
{
	int i;
	int t;
	scanf("%d", &t);
	int r;
	char s[161];
	
	for (i = 0; i < t; i++)
	{
		scanf("%d %s", &r, s);
		
		printf("%s\n", strmulti(s, r));
	}
	return 0;
}

char* strmulti(char* str, int multi)
{
	int i,j=0;
	char dst[161];
	char *dstor = str;
	while (*str)
	{
		for (i = 0; i < multi; i++)
		{
			dst[j] = *str;
			j++;
		}
		str++;
	}
	dst[j] = 0;
	strcpy(dstor, dst);
	return dstor;
}