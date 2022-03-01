#include <stdio.h>
#include <stdlib.h>
int recursive_fib(int n);
main()
{
	int n, i;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		printf("%d ",recursive_fib(i));
	}
	return 0;
}
int recursive_fib(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return recursive_fib(n-1)+recursive_fib(n-2);
	}
} 
