#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	int i, flag=1; // 1 : 팰린드롬, 0 : not팰린드롬
	int str_len;
	char str[101] = { 0 };
	scanf("%s", str);
	str_len = strlen(str);

	for (i = 0; i < str_len / 2; i++)
	{
		if (str[i] != str[str_len - 1 - i])
		{
			flag = 0;
		}
	}
	printf("%d", flag);
	return 0;
}
