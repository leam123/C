#include <stdio.h>
#include <stdlib.h>
int sum(int a[], int size);
float average(int a[], int size);
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
	sum(a,size);
	average(a,size);
	return 0;
}
int sum(int a[], int size)
{
	int sum, i;
	for(i=0;i<size;i++)
	{
		sum+=a[i];
	}
	return sum;
}
float average(int a[], int size)
{
	int sum=sum(a,size);
	float average= sum/size;
	return average;
}
/
