#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int i, j;
	int b;
	int endIndex;
	int digit, temp;
	long long int ans = 0;
	char n[35];
	
	scanf("%s %d", n, &b);

	endIndex = strlen(n) - 1;
	for (i = endIndex; i >= 0; i--)
	{
		digit = 1;
		for (j = 0; j < endIndex - i; j++)
		{
			digit *= b;
		}

		if (n[i] >= '0' && n[i] <= '9')
		{
			temp = (n[i]-'0')*digit;
		}
		else
		{
			temp = (n[i]-'A' + 10) * digit;
		}
		ans += temp;
	}

	printf("%lld", ans);
	return 0;
}