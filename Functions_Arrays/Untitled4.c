#include <stdio.h>
#include <stdlib.h>
float median(int a[], int size);
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
	printf("%d ", median(a,size));	
	return 0;
}
float median(int a[], int size)
{
	float median=0.0;
	
	if(size%2 == 1)
	{
		median=a[size/2];
	}
	else
	{
		median=a[(size-1)/2]+a[size/2]/size;
	}
	return mean;
}
/
