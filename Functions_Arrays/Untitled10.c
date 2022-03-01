#include <stdio.h>
#include <stdlib.h>
void sequential_search(int a[],int size);
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
	sequential_search(a,size);	
	return 0;
}
void sequential_search(int a[],int size)
{
	int i, num;
	printf("Enter number to be searched: ");
	scanf("%d",&num);
	for(i=0;i<size;i++)
	{
		if(num==a[i])
		{
			printf("Located at %d",i);
		}
	}
	return -1;
}
