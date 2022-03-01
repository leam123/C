#include <stdio.h>
void display_num (int arr[]);			
main ()
{
	int i=0, ans=0;
	int arr[10]={0};
	
	do 										
	{
		for(i=0; i<10; i++)				   
		{
			printf("Enter a number: ");     
			scanf("%d",&arr[i]);
		}
			
			display_num (arr); 			
			printf("Try again <1-yes, 0-no>?  ");
			scanf("%d",&ans);
		
	}while(ans==1);
	
	return 0;
}
void display_num (int arr[])			
{
	int i=0;
	
	for(i=0; i<10; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
										
}
