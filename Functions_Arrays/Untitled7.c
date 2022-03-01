#include <stdio.h>
#include <stdlib.h>
void insertion_sort(int a[], int size);
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
	insertion_sort(a,size);	
	return 0;
}
void insertion_sort(int a[], int size)
{
	int i, j, temp;
	for(i=0;i<size;i++)
	{
		temp=a[i];
		j=i - 1;
		
		while(temp<a[j] && j>=0)
		{
			a[j + 1]=a[j];
			j--;
		} 
		a[j + 1]=temp;
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}
