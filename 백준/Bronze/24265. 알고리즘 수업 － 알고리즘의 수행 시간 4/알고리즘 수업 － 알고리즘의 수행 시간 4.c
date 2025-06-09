#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int i;
	long long int sum = 0;
	for (i = 1; i <= n - 1; i++)
	{
		sum += n - i;
	}

	printf("%lld\n", sum);
	printf("2");
}