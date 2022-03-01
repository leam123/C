#include <stdio.h>
#include <stdlib.h>
void binary_search(int a[], int size);
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
	binary_search(a,size);
	return 0;
}
void binary_search(int a[], int size)
{
	int num, first=0, last=size - 1, mid=(first+last)/2;
	printf("Enter number to be searched: ");
	scanf("%d",&num);
	while(first <= last)
	{
		if(num>a[mid])
		{
			first=mid + 1;
		}
		else if(num==a[mid])
		{
			printf("Located at %d",mid);
			break;
		}
		else
		{
			last=mid - 1;
		}
		mid=(first+last)/2;
	}
	
	if(first >  last)
	{
		printf("NOT FOUND\n");
	}
}
