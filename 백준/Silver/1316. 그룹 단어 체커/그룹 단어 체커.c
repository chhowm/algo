#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	int flag = 1;
	int cnt = 0;
	int i, k, j;
	int n;
	char word[101];
	
	scanf("%d", &n);
		
	for (i = 0; i < n; i++)
	{
		scanf("%s", word);

		flag = 1;
		for (k = 0; word[k + 1] != 0; k++)
		{
			if (word[k] != word[k + 1])
			{
				for (j = 2; word[k + j] != 0; j++)
				{
					if (word[k] == word[k + j])
					{
						flag = 0;
						break;
					}
				}
			}
			if (flag == 0) break;
		}
		if (flag == 1)
		{
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
