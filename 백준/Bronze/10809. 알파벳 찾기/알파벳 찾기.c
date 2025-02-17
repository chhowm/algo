#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() 
{
	char s[101];
	scanf("%s", s);

	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; ; j++)
		{
			if (*(s + j) == 'a' + i)
			{
				printf("%d ", j);
				break;
			}
			else if (*(s + j) == 0)
			{
				printf("-1 ");
				break;
			}
		}
	}

	return 0;
}
