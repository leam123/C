#include <stdio.h>
void number_series (int n);
main ()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	number_series (n);
	return 0;
}
void number_series (int n)
{
	int i=1;
	for( ; i<=n; i++)
	{
		printf("%d ",(i*i));
	}
}
