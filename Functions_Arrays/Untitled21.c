#include <stdio.h>
#include <stdlib.h>
void alternateElements(int a[], int size);
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
	alternateElements(a,size);
	return 0;
}
void alternateElements(int a[], int size)
{
	int i;
	for(i=0;i<size;i+=2)
	{
		printf("%3d",a[i]);
	}
}
