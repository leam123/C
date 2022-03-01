#include <stdio.h>
void highest_arr (int arr[], int n);
main ()
{
	int arr[100]={};
	int i=0, n=0;
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
		
	for (; i<n; i++)
	{
		printf("Enter numbers: ");
		scanf("%d",&arr[i]);
	}
	
	highest_arr(arr,n);
	return 0;
}
void highest_arr (int arr[], int n)
{
	int i=0;
	int highest=arr[0];
	int highest2=arr[1];
	
	for(;i<n;i++)
	{
		if (arr[i]>highest)
		{
		    highest2=highest;
			highest=arr[i];
		}
		else if(arr[i]>highest2 && arr[i] != highest)
		{
		    highest2=arr[i];
		}
	}
	printf("1st Highest is %d\n", highest);
	printf("2nd Highest is %d", highest2);
}
