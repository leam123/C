#include <stdio.h>
int gcd (int x, int y);
main ()
{
	int x=0, y=0;
	printf("Enter numbers: ");
	scanf("%d %d",&x, &y);
	printf("GCD: %d",gcd (x,y));
	return 0;
}
int gcd (int x, int y)
{
	int i=1, gcd;
	for( ; i<x && i<y; i++)
	{
		if(x%i==0 && y%i==0)
		{
			gcd=i;
		}
	}
	return gcd;
}
