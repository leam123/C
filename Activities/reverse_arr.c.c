#include <stdio.h>
void arr_reverse (int arr[], int arr1[],int n);
main ()
{
	int i=0, n=0, ans=0;
	int arr[100], arr1[100];
	
	do 
	{
		printf("Enter number of elements:  ");
		scanf("%d",&n);
			
		for (i=0; i<n; i++)
		{
			printf("Enter array:  ");
			scanf("%d",&arr[i]);
		}
	
		arr_reverse (arr,arr1,n);
		
		printf("Try again <1-yes,0-no>? ");
		scanf("%d",&ans);
		
	}while (ans==1);
	
	return 0;
}
void arr_reverse (int arr[], int arr1[], int n)
{
	int j, i;
	
	for (i=n - 1, j=0; i>=0; i--, j++)
	{
		arr1[j] = arr[i];	
	}
	
	for (i=0; i<n; i++)
	{		
		printf("%d \n",arr1[i]);
	}
	
}
