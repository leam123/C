#include <stdio.h>
int sum_of_cubes (int n);
main ()
{
	int n;
	printf("Sum of cubes: %lld",sum_of_cubes (n));
	return 0;
}
int sum_of_cubes (int n)
{
	int i=1;
	long long int sum=0;
	for( ; i<=500; i++)
	{
		if(i%5==0)
		{
			sum+=i*i*i;
		}	
	}
	return sum;
}
