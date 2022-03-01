#include <stdio.h>
void range_reverse (int n);
main ()
{
	int n=0, ans=0;
	
	do 
	{
		printf("Enter a number: ");
		scanf("%d",&n);
		
		range_reverse (n);
		
		printf("Try again <1-yes, 0-no>? ");
		scanf("%d",&ans);
		
	}while(ans==1);
	
	return 0;
}
void range_reverse (int n)
{
	int i=0;
	
	for(i=n;i>0;i--)
	{
		printf("%d",i);
	}
}
