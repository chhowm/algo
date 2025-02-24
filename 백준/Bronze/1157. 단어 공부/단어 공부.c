#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	char salp[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	char balp[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	int cnt[26] = { 0 };
	int i, j;
	struct max {
		int maxcnt;
		int maxindex;
		int maxflag;
	}max_;
	max_.maxcnt = 0;
	max_.maxflag = 0;
	char word[1000001];
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (word[i] == salp[j] || word[i] == balp[j]) cnt[j]++;
		}
	}

	for (i = 0; i < 26; i++)
	{
		if (cnt[i] > max_.maxcnt)
		{
			max_.maxcnt = cnt[i];
			max_.maxindex = i;
		}
	}

	for (i = 0; i < 26; i++)
	{
		if (cnt[i] == max_.maxcnt)max_.maxflag++;
	}
	if (max_.maxflag == 1)printf("%c", balp[max_.maxindex]);
	else printf("?");
	return 0;
}
