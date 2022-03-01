#include <stdio.h>
long long int factorial (int n);
main ()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("%lld",factorial (n));
	return 0;
}
long long int factorial (int n)
{
	int i; 
	long long int fact=1;
	for( i=1; i<=n; i++)
	{
		fact*=i;
	}
	return fact;
}
