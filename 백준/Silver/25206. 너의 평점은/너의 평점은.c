#include <stdio.h>
#include <string.h>

int main() 
{
	int i;
	float max = 0;
	float score, total_score = 0;

	for (i = 0; i < 20; i++)
	{
		
		char sub[51], grade[3];
		scanf("%s %f %s", sub, &score, grade);
		
		if (strcmp("P", grade) == 0) continue;

		if (strcmp("A+", grade) == 0) max += score * 4.5;
		else if (strcmp("A0", grade) == 0) max += score * 4.0;
		else if (strcmp("B+", grade) == 0) max += score * 3.5;
		else if (strcmp("B0", grade) == 0) max += score * 3.0;
		else if (strcmp("C+", grade) == 0) max += score * 2.5;
		else if (strcmp("C0", grade) == 0) max += score * 2.0;
		else if (strcmp("D+", grade) == 0) max += score * 1.5;
		else if (strcmp("D0", grade) == 0) max += score * 1.0;
		else if (strcmp("F", grade) == 0);

		total_score += score;
	}
	printf("%.6f", max/total_score);
	return 0;
}
