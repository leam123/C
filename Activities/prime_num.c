#include <stdio.h>
void prime_num (int n);
main ()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	prime_num(n);
	return 0;
}
void prime_num (int n)
{
	int i=2, j=2, prime;
	
	printf("1 ");
	for( ; i<=n; i++)
	{
	    prime=1;
		for( ; j<=i/2; j++)
		{
			if(i%j==0)
			{
				prime=0;
				break;
			}
		}	
		if (prime==1)
		{
			printf("%d ",i);
		}
	}
}
