#include <stdio.h>
#include <stdlib.h>
void copyArray(int a[], int size);
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
	copyArray(a,size);
	return 0;
}
void copyArray(int a[], int size)
{
	int a1[100], i, j=0;
	for(i=0;i<size;i++)
	{
		a1[j]=a[i];
		j++;
	}
	printf("Copied Array: ");
	for(i=0;i<size;i++)
	{
		printf("%3d",a1[i]);
	}
}
