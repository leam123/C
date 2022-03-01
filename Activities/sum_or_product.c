#include <stdio.h>
int sum_or_product (int x, int y);
main ()
{
	int x=0, y=0, ans=0;
	
	do
	{
		printf("Enter 2 values:\n ");
		scanf("%d %d",&x,&y);
	
		printf("Output: %d\n", sum_or_product (x,y));
	
		printf("Try again <1-yes, 0-no>?  ");
		scanf("%d",&ans);	
		
		system ("PAUSE"); // used in C or C++ to not directly close the program after the execution.
	}while(ans==1);
	 
	return 0;
}
int sum_or_product (int x, int y)
{
	return ((x==y)?x+y:x*y); // ternary (condition)?true:false;
}
