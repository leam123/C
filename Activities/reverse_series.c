#include <stdio.h>
void reverse_series (int n);
main ()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	reverse_series (n);
	return 0;
}
void reverse_series (int n)
{
	int i=n;
	for( ; i>=1; i--)
	{
		printf("%d ",(i*i));
	}
}
