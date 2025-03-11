#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <string.h>

int main() 
{
	int i, j;
	typedef struct {
		int max;
		int row;
		int col;
	}_max;
	
	int num[9][9];
	_max max;
	max.max = 0;
	max.row = 0;
	max.col = 0;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (max.max < num[i][j])
			{
				max.max = num[i][j];
				max.row = i;
				max.col = j;
			}
		}
	}

	printf("%d\n%d %d", max.max, max.row + 1, max.col + 1);
	return 0;
}
