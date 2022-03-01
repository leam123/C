typedef struct{
	int x; 
	int y;
}Point;

typedef struct{
	Point pt1;
	Point pt2;
	Point pt3;
	Point pt4;
}Square;

void assign(Square *sq, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
void display(Square sq);
double area(Square sq);
double distance(Point p1, Point p2);
