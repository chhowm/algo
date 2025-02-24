#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	int i;
	int maxcnt = 0, maxindex = 0, maxflag = 0;;
	int cnt[26] = { 0 };
	char word[1000001];
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
	{
		int index = (word[i] >= 'a') ? word[i] - 'a' : word[i] - 'A';
		cnt[index]++;
	}

	for (i = 0; i < 26; i++)
	{
		if (cnt[i] > maxcnt)
		{
			maxcnt = cnt[i];
			maxindex = i;
			maxflag = 0;
		}
		else if (cnt[i] == maxcnt) maxflag = 1;
	}

	if (maxflag) printf("?");
	else printf("%c", maxindex + 'A');
	return 0;
}
