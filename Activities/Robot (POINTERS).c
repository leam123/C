#include <stdio.h>
#include <stdlib.h>

void printLocation(int *x, int *y);
void origin(int *x, int *y);
void exitMessage();
void menuLayout();
void move(int *a, int *b);

int main()
{
	menuLayout();
	return 0;
}
void menuLayout()
{
	int a=0, b=0, *x=0, *y=0, n=0;
	char ans='n';
	
	printf("1 - MOVE\n");
	printf("2 - DISPLAY\n");
	printf("3 - ORIGIN\n");
	printf("4 - EXIT\n");
	
	do
	{
		printf("Choose a number: ");
		scanf("%d",&n);
		
		switch(n)
		{
			case 1:
					move(&a,&b);
					break;
			case 2:
					printLocation(&a,&b);
					break;
			case 3:	
					origin(&a,&b);
					break;
			case 4:
					exitMessage();
					break;
			default:
					printf("Invalid Number!\n");
					break;
		}
		printf("Try again <Y>es/<N>o? ");
		scanf("%s",&ans);
		
	}while(ans=='y' || ans=='Y');
}
void printLocation(int *x, int *y)
{
	printf("Robby is at location %d,%d\n",*x,*y);
}
void origin(int *x, int *y)
{
	*x=0;
	*y=0;
	printf("Origin of Robby is at %d,%d\n",*x,*y);
}
void exitMessage()
{
	printf("Program Terminated, Goodbye!\n");
	exit(0);
}
void move(int *a, int *b)
{
	int direction=0, points=0;
	
	printf("6 - EAST, 4 - WEST, 8 - NORTH, 2 - SOUTH\n");
	printf("Enter Direction: ");
	scanf("%d",&direction);
	
	while(direction != 6 && direction != 4 && direction != 8 && direction != 2)
	{
			printf("Wrong Direction...\n");
			printf("Enter Direction: ");
			scanf("%d",&direction);
	}
	
	printf("How many points? ");
	scanf("%d",&points);
	
	if(direction == 6)
	{
		*a += points;
		printf("Robby moved East, %d points\n", points);
	}
	else if(direction == 4)
	{
		*a -= points;
		printf("Robby moved West, %d points\n", points);
	}
	else if(direction == 8)
	{
		*b += points;
		printf("Robby moved North, %d points\n", points);
	}
	else if(direction == 2)
	{
		*b -= points;
		printf("Robby moved South, %d points\n", points);
	}
	
}
