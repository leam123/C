#include <stdio.h>
#include <stdlib.h>
void clumps(int a[], int size);
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
	clumps{a.size);	
	return 0;
}
void clumps(int a[], int size)
{
	int i, count=0;
	for(i=0;i<size;i++)
	{
		if{a[i] != a[i + 1])
		{
			count++;
		}
	}
	printf("Clumps: %d",count);
}
