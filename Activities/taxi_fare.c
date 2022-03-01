#include <stdio.h>
#include <stdlib.h>
int taxi_fare(int m);
main()
{
	int m;
	printf("Enter the distance<meters>: ");
	scanf("%d",&m);
	
	printf("Taxi Fee: %d",taxi_fare(m));
	return 0;
}
int taxi_fare(int m)
{
	float fee=0.0f;
	
	if(m<=300)
	{
		fee=20.00;
	}
	else if(m>300)
	{
		fee=20+(((m-300)/200)*2)+2;
	}
	return fee;
}
