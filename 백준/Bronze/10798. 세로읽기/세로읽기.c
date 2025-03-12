#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	int i, j, k=0;
	int strmax = 0;
	char word[5][16] = { 0 };
	char ans[76];

	for (i = 0; i < 5; i++)
	{
		scanf("%s", word[i]);
		if (strmax < strlen(word[i])) strmax = strlen(word[i]);
	}
	

	for (j = 0; j < strmax; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (word[i][j] != '\0')
			{
				ans[k] = word[i][j];
				k++;
			}
		}
	}

	ans[k] = '\0';
	printf("%s", ans);
	return 0;
}
