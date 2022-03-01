#include <stdio.h>
int lowest_value (int a, int b, int c, int d);
main ()
{
	int a,b,c,d;
	printf("Enter 4 values: ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("Lowest: %d",lowest_value(a,b,c,d));
	return 0;
}
int lowest_value (int a, int b, int c, int d)
{
	int temp=a;
	if(temp>b)
	{
		temp=b;
	}
	if(temp>c)
	{
		temp=c;
	}
	if(temp>d)
	{
		temp=d;
	}
	return temp;
}
