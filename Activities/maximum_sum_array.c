#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

void maximum_sum(int arr[], int *n);
int main()
{
	int i=0, n=0, arr[MAXSIZE];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	maximum_sum(arr,(&n));
	return 0;
}
void maximum_sum(int arr[], int *n)
{
	int x=arr[0], y=arr[1], i=0, j=0;
	
	for(i=0;i<(*n);i++)
	{
		for(j=i + 1; j<(*n); j++)
		{
			if(arr[i]+arr[j]>x+y)    // for the minimum sum change > to <
			{
				x=arr[i];
				y=arr[j];	
			}
		}
	}
	
	printf("The number that has the max sum is %d and %d",x,y);
}

