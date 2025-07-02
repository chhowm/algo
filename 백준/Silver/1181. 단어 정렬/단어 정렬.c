#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmpStr(const void* a, const void* b)
{
	const char* str1 = (const char*)a;
	const char* str2 = (const char*)b;
	size_t len1 = strlen(str1);
	size_t len2 = strlen(str2);

	if (len1 != len2) return (int)(len1 - len2);
	else return strcmp(str1, str2);
}


int main()
{
	int n;
	scanf("%d", &n);

	char string[20000][51] = { 0 };

	for (int i = 0; i < n; i++)
	{
		scanf("%s", string[i]);
	}
	qsort(string, n, sizeof(string[0]), cmpStr);

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1 || strcmp(string[i], string[i + 1]) != 0)
		printf("%s\n", string[i]);
	}
	return 0;
}