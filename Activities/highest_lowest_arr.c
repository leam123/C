#include <stdio.h>
int highest_arr (int arr[], int n);
int lowest_arr (int arr[], int n);
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
	
	printf("Highest is %d\n", highest_arr(arr,n));
	printf("Lowest is %d", lowest_arr(arr,n));
	
	return 0;
}
int highest_arr (int arr[], int n)
{
	int i=0;
	int highest=arr[0];
	
	for(;i<n;i++)
	{
		if (arr[i]>highest)
		{
			highest=arr[i];
		}
	}
	return highest;
}
int lowest_arr (int arr[], int n)
{
	int i=0;
	int highest=arr[i];
	int lowest=highest;
	
	for(;i<n;i++)
	{
		if (arr[i]<lowest)
		{
			lowest=arr[i];
		}
	}
	return lowest;
}
