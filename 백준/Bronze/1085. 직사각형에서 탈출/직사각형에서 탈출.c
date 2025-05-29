#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int mid_w, mid_h;
	mid_w = w / 2;
	mid_h = h / 2;

	int distance_w, distance_h;
	if (x <= mid_w) distance_w = x;
	else distance_w = w - x;

	if (y <= mid_h) distance_h = y;
	else distance_h = h - y;

	if (distance_w < distance_h) printf("%d", distance_w);
	else printf("%d", distance_h);
	return 0;
}