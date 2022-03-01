#include <stdio.h>
int div_sum (int n);
main ()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Sum is: %d", div_sum(n));
	return 0;
}
int div_sum (int n)
{
	int i,sum=0;
	for(i=1; i<=n; i++)
	{
		if (i%3==0 || i%5==0 )
		{
			sum+=i;
		}	
	}
	return sum;
}
