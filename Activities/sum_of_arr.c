#include <stdio.h>
int sum_of_arr (int arr[]);
main ()
{	
	int arr[6]={0};
	int i=0;
	
	for(;i<6;i++)
		{
			printf("Enter numbers: ");
			scanf("%d",&arr[i]);
		}
		
		printf("Sum: %d",sum_of_arr(arr));
	
	
	return 0;
}
int sum_of_arr (int arr[])
{
	int i=0, sum=0;
	
	for(;i<6;i++)
		{
			sum+=arr[i];
		}
	return sum;
}
