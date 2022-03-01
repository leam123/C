#include <stdio.h>
#include <stdlib.h>
void selection_sort(int a[],int size);
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
	selection_sort(a,size);
	return 0;
}
void selection_sort(int a[],int size)
{
	int i, j, temp;
	for(i=0;i<size;i++)
	{
		for(j=i + 1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%3d",a[i]);
	}
}
