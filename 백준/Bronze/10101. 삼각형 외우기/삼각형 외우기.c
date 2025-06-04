#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int angleA, angleB, angleC;
	scanf("%d %d %d", &angleA, &angleB, &angleC);

	if (angleA == 60 && angleB == 60 && angleC == 60)
	{
		printf("Equilateral");
	}
	else if (angleA + angleB + angleC == 180 && ((angleA == angleB) || (angleA == angleC) || (angleB == angleC)))
	{
		printf("Isosceles");
	}
	else if (angleA + angleB + angleC == 180 && angleA != angleB && angleA != angleB && angleB != angleC)
	{
		printf("Scalene");
	}
	else
	{
		printf("Error");
	}
	return 0;
}