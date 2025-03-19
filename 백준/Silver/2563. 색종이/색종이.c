#include <stdio.h>

int main()
{
	int white_paper[100][100] = { 0 };
	int i, j, k;
	int x, y;
	int area = 0;
	int paper_cnt;
	scanf("%d", &paper_cnt);

	for (i = 0; i < paper_cnt; i++)
	{
		scanf("%d %d", &x, &y);
		for (j = y; j < y + 10; j++)
		{
			for (k = x; k < x + 10; k++)
			{
				white_paper[j][k] = 1;
			}
		}
	}

	for (i = 0; i < 100; i++)
	{
		for(j = 0; j < 100; j++)
		{
			if (white_paper[i][j] == 1)area++;
		}
	}

	printf("%d", area);
}