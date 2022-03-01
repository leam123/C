#include <stdio.h>
#include <stdlib.h>
int recursive_fact(int n);
main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	printf("Factorial of %d is %d",n,recursive_fact(n));
	return 0;
}
int recursive_fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*recursive_fact(n-1);
	}
} 
