#include <stdio.h>
void simple_loop (int n);
main ()
{
	int n=0, ans=0;
	
	do 
	{
		printf("Enter a number: ");
		scanf("%d",&n);
		
		simple_loop (n);
		
		printf("Try again <1-yes, 0-no>? ");
		scanf("%d",&ans);
		
	}while(ans==1);
	
	return 0;
}
void simple_loop (int n)
{
	int i=1;
	
	for(;i<=n;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	
	if(n<=0)
	{
		printf("Invalid input\n");
	} 
}
