#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	char board[50][50] = { 0 };
	int i, j, k, l;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf(" %c", &board[i][j]);
		}
	}

	int minCnt = 64;
	for (i = 0; i <= n - 8; i++)
	{
		for (j = 0; j <= m - 8; j++)
		{
			int whiteStart = 0;
			int blackStart = 0;
			for (k = 0; k < 8; k++)
			{
				for (l = 0; l < 8; l++)
				{
					char currentColor = board[i+k][j+l];
					if ((k + l) % 2 == 0)
					{
						if (currentColor != 'W') whiteStart++;
						if (currentColor != 'B') blackStart++;
					}
					else
					{
						if (currentColor != 'B') whiteStart++;
						if (currentColor != 'W') blackStart++;
					}
				}
			}
			int temp = whiteStart < blackStart ? whiteStart : blackStart;
			if (temp < minCnt) minCnt = temp;
		}
	}
	printf("%d", minCnt);
}