#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void thirdLargest(int a[], int size);
int main()
{
	int i, a[100], size;
	printf("Enter size: ");
	scanf("%d",&size);
	printf("Enter %d elements\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	thirdLargest(a,size);
	return 0;
}
void thirdLargest(int a[], int size)
{
	int i;
	int first=INT_MIN;
	int second=INT_MIN;
	int third=INT_MIN;
	
	for(i=0;i<size;i++)
	{
		if(a[i]>first)
		{
			third=second;
			second=first;
			first=a[i];
		}
		else if(a[i]>second && a[i] != first)
		{
			third=second;
			second=a[i];
		}
		else if(a[i]>third && a[i] != second && a[i] != first)
		{
			third=a[i];
		}
	}
	printf("1st: %d\n2nd: %d\n3rd: %d",first,second,third);
}
