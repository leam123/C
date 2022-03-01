#include <stdio.h>
void perfect_or_not (int n);
main ()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	perfect_or_not (n);
	return 0;
}
void perfect_or_not (int n)
{
	int i=1, sum=0;
	for( ; i<n; i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	{
		printf("Perfect");
	}
	else 
	{
		printf("Not Perfect");
	}
}
