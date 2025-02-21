#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	int pic[6];
	int ans[6] = { 1, 1, 2, 2, 2, 8 };
	int i;
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &pic[i]);
	}

	for (i = 0; i < 6; i++)
	{
		printf("%d ", ans[i]-pic[i]);
	}
	return 0;
}
