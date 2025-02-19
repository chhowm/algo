#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	char word[101];
	
	while (fgets(word, sizeof(word), stdin) != NULL) {
		printf("%s", word);
	}
	
	return 0;
}
