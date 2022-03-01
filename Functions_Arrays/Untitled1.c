#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int moveZeros(int a[], int size);
int main()
{
	int size, a[100], i;
	printf("Enter size: ");
	scanf("%d",&size);
	printf("Enter %d elements\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	moveZeros(a,size);
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
int moveZeros(int a[], int size)
{
	int left=0, right=size - 1, temp;
	while(left < right)
	{
		while(a[left] != 0)
		{
			left++;
		}
		while(a[right] == 0)
		{
			right--;
		}
		if(left < right)
		{
			temp=a[left];
			a[left]=a[right];
			a[right]=temp;
		}
	}
}
