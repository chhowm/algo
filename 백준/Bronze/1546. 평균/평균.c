#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i;
	int max_score = 0;
	double avr_score = 0;
	int s_num;
	scanf("%d", &s_num);

	double *score = malloc(s_num * sizeof(double));
	   	 
	for (i = 0; i < s_num; i++)
	{
		scanf("%lf", &score[i]);
		if ((int)score[i] >= max_score)
		{
			max_score =(int)score[i];
		}
	}

	for (i = 0; i < s_num; i++)
	{
		score[i] = (double)score[i] / (double)max_score * 100;
	}

	for (i = 0; i < s_num; i++)
	{
		avr_score += score[i];
	}
	avr_score /= s_num;

	printf("%.3lf", avr_score);

	return 0;
}
