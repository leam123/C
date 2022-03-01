#include <stdio.h>
void smallest_arr (int arr[], int n);
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
	
	smallest_arr(arr,n);
	return 0;
}
void smallest_arr (int arr[], int n)
{
	int i=0;
	int smallest=arr[0];
	int smallest2=arr[1];
	
	for(;i<n;i++)
	{
		if (arr[i]<smallest)
		{
		    smallest2=smallest;
			smallest=arr[i];
		}
		else if(arr[i]<smallest2 && arr[i] != smallest)
		{
		    smallest2=arr[i];
		}
	}
	printf("1st Smallest is %d\n", smallest);
	printf("2nd Smallest is %d", smallest2);
}
