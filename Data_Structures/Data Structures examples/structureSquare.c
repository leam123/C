#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	int x;
	int y;
}Point;

typedef struct
{
	Point pt1;
	Point pt2;
	Point pt3;
	Point pt4;
}Square;

void assignPoint(Point p, int x, int y)
{
	p.x = x;
	p.y = y; 
}

void assignSquare(Square *sq, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	sq->pt1.x = x1;
	sq->pt1.y = y1;
	sq->pt2.x = x2;
	sq->pt2.y = y2;
	sq->pt3.x = x3;
	sq->pt3.y = y3;
	sq->pt4.x = x4;
	sq->pt4.y = y4;
	/*	assignPoint(sq->pt1,x1,y1);
	assignPoint(sq->pt2,x2,y2);
	assignPoint(sq->pt3,x3,y3);
	assignPoint(sq->pt4,x4,y4); */
}

double area(Square *sq)
{
	return (sq->pt2.y-sq->pt4.y)*(sq->pt2.x-sq->pt1.x);
}

double distance(Square *sq)
{
	double dc1 = sqrt(pow(sq->pt2.x-sq->pt1.x,2)+(sq->pt2.y-sq->pt1.y,2));
	double dc2 = sqrt(pow(sq->pt2.x-sq->pt4.x,2)+(sq->pt2.y-sq->pt4.y,2));
	if((sq->pt2.x-sq->pt1.x)==(sq->pt4.x-sq->pt3.x) && (sq->pt1.y-sq->pt3.y)==(sq->pt2.y-sq->pt4.y) && (sq->pt2.x-sq->pt1.x)==(sq->pt1.y - sq->pt3.y))
	{
		printf("The distance on all sides is %.2f\n",dc1);
		return 1;
	}
	else
	{
		printf("The distance on one side is %.2f while the other side is %.2f\n",dc1,dc2);
		return 0;
	}
}

int main()
{
	Square sq;
	assignSquare(&sq,1,4,4,4,1,1,4,1);
	//assignSquare(&sq,1,3,4,4,1,3,4,1);
	double d = distance(&sq);
	if(d==1)
	{
		printf("\nSquare is Valid\n");
		printf("\nArea: %.2f",area(&sq));
	}
	else
	{
		printf("\nInvalid. Not a square\n");
	}
	
	return 0;
}
