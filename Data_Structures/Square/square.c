#include "Square.h"
void assign(Square *sq, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
	Point p1, p2, p3, p4;
	p1.x=x1;
	p1.y=y1;
	p2.x=x2;
	p2.y=y2;
	p3.x=x3;
	p3.y=y3;
	p4.x=x4;
	p4.y=y4;
	
	if(distance(p1,p2)==distance(p3,p4)&&distance(p1,p3)==distance(p2,p4)){
		sq->pt1.x=x1;
		sq->pt1.y=y1;
		sq->pt2.x=x2;
		sq->pt2.y=y2;
		sq->pt3.x=x3;
		sq->pt3.y=y3;
		sq->pt4.x=x4;
		sq->pt4.y=y4;		
	}
	else{
		sq->pt1.x=0;
		sq->pt1.y=0;
		sq->pt2.x=0;
		sq->pt2.y=0;
		sq->pt3.x=0;
		sq->pt3.y=0;
		sq->pt4.x=0;
		sq->pt4.y=0;
	}
}
void display(Square sq){
	printf("[%d,%d]\n",sq.pt1.x,sq.pt1.y);
	printf("[%d,%d]\n",sq.pt2.x,sq.pt2.y);
	printf("[%d,%d]\n",sq.pt3.x,sq.pt3.y);
	printf("[%d,%d]\n",sq.pt4.x,sq.pt4.y);
}
double area(Square sq){
	return 4*distance(sq.pt1,sq.pt2);
}
double distance(Point p1, Point p2){
	return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
}
