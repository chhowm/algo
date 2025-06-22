#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int bag = 0;
	int flag = 0;
	while (n >= 0)
	{
		if (n % 5 == 0)
		{
			bag += n / 5;
			flag = 1;
			break;
		}
		n -= 3;
		bag++;
	}
	if (flag)
	{
		printf("%d\n", bag);
	}
	else printf("-1\n");
	return 0;
}