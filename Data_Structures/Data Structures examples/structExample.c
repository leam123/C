#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int x, y;
} point;

void assign(point *pt, int x, int y)
{
	pt->x = x;
	pt->y = y;
}

void display(point *pt)
{
	printf("x = %d, y = %d", pt->x, pt->y);
}

int main()
{
	point *pt;
	assign(&pt,5,8);
	display(&pt);
	return 0;
}


