#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	int div, modulas;
	char ans[30];
	char ansDst[30];

	int n, b;
	scanf("%d %d", &n, &b);

	for (i = 0;  ; i++)
	{
		div = n / b;
		modulas = n % b;

		if (modulas >= 10 && modulas <= 35)
		{
			ansDst[i] = modulas + 'A' - 10;
		}
		else
		{
			ansDst[i] = modulas + '0';
		}

		n = div;
		if (div == 0) break;
	}
	ansDst[i + 1] = '\0';
	for (i = 0; i < strlen(ansDst); i++)
	{
		ans[i] = ansDst[strlen(ansDst) - i - 1];
	}
	ans[i] = '\0';
	printf("%s", ans);
	return 0;
}