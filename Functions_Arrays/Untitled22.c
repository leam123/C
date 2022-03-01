#include <stdio.h>
#include <stdlib.h>
void reverseArray(int a[], int size);
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
	reverseArray(a,size);	
	return 0;
}
void reverseArray(int a[], int size)
{
	int i, j, a1[100];
	for(i=size - 1, j=0; i>=0; j++, i--)
	{
		a1[j]=a[i];
	}
	for(i=0;i<size;i++)
	{
		printf("%3d",a1[i]);
	}
}
