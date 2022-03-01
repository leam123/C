#include <stdio.h>
#include <stdlib.h>
void merge(int a[],int a1[], int *size,int *size2);
int main()
{
	int i, a[100], a1[100], size, size2;
	printf("Enter size: ");
	scanf("%d",&size);
	printf("Enter %d elements\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter size2: ");
	scanf("%d",&size2);
	printf("Enter %d elements\n",size2);
	for(i=0;i<size2;i++)
	{
		scanf("%d",&a1[i]);
	}
	merge(a,a1,&size,&size2);
	return 0;
}
void merge(int a[], int a1[], int *size, int *size2)
{
	int size3, i, j, a2[100];
	
	size3=(*size) + (*size2);
	for(i=0;i<(*size);i++)
	{
		a2[i]=a[i];
	}
	for(j=0;j<(*size2);j++)
	{
		a2[i]=a1[j];
		i++;
	}
	
	for(i=0;i<size3;i++)
	{
		printf("%d ",a2[i]);
	}
}
