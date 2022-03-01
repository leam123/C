#include <stdio.h>
void average_of_arr (int arr[],int *n);
int main ()
{	
	int arr[100]={0};
	int i=0, n=0;
	printf("Enter numbers: ");
	scanf("%d",&n);
	
	printf("Enter %d numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		
    average_of_arr(arr,&n);	
	return 0;
}
void average_of_arr (int arr[],int *n)
{
	int i=0, sum=0;
	float ave=0.0;
	
	for(i=0;i<(*n);i++)
	{
		sum+=arr[i];
	}
	ave=(float)sum/(*n);
	printf("Average : %.2f",ave);
}
