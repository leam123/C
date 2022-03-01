#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	int x, y;
} point;

typedef struct
{
	point p1;
	point p2;
} line;

void assign(point *pt, int x, int y)
{
	pt->x = x;
	pt->y = y;
}

void assignLine(line *ln, int x1, int y1, int x2, int y2)
{
	ln->p1.x = x1;
	ln->p1.y = y1;
	ln->p2.x = x2;
	ln->p2.y = y2;
}

void display(line *ln)
{
	printf("x1 = %d, y1 = %d \n x2 = %d , y2 = %d", ln->p1.x, ln->p1.y, ln->p2.x, ln->p2.y);
}

double distance(line *ln)
{
	return sqrt(pow(ln->p2.x - ln->p1.x,2) + pow(ln->p2.y - ln->p1.y,2));
}

int main()
{
	point *pt;
	line *ln;
	assignLine(&ln,1,4,4,4);
	display(&ln);
	printf("\ndistance: %.2f",distance(&ln));
	
	return 0;
}


