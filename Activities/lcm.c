#include <stdio.h>
int lcm (int x, int y);
main ()
{
	int x=0, y=0;
	printf("Enter numbers: ");
	scanf("%d %d",&x, &y);
	printf("LCM: %d",lcm (x,y));
	return 0;
}
int lcm (int x, int y)
{
	int least=x*y;
	int i=x;
	
	if(i<y)
	{
	    i=y;
	}
	
	for( ; i<least; i++)
	{
		if(i%x==0 && i%y==0)
		{
			least=i;
		}
	}
	return least;
}
