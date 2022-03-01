#include <stdio.h>
int isPerfect (long long int n);
main ()
{
	int n=2;
	
	printf("First 4 perfect numbers:\n");
	
	for( ; n<10000; n++)
	{
		if(isPerfect (n))
		{
			printf("%d\n",n);
		}
	}
	
	return 0;
}
int isPerfect (long long int n)
{
	int i=2, ok=0;
	long long int sum=1;
	
	for( ; i*i<n; i++)
	{
		if(n%i==0)
		{
			sum+=i + n/i;
		}
	}
	if(sum==n && n!=1)
	{
		ok=1;
	}
	return ok;
}
