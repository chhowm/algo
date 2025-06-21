#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);

	int num = 666;
	int cnt = 1;
	while (1)
	{
		char temp[20] = { 0 };
		sprintf(temp, "%d", num);
		if (strstr(temp, "666"))
		{
			if (cnt == n)
			{
				printf("%d", num);
				break;
			}
			cnt++;
		}
		num++;
	}
	return 0;
}