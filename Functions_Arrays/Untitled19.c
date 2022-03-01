#include <stdio.h>
#include <stdlib.h>
void largestProduct(int a[], int size);
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
	largestProduct(a, size);
	return 0;
}
void largestProduct(int a[], int size)
{
	int i, j, x=a[0], y=a[1];
	for(i=0;i<size;i++)
	{
		for(j=i + 1;j<size;j++)
		{
			if(a[i]*a[j]>x*y)
			{
				x=a[i];
				y=a[j];
			}	
		}	
	}
	printf("%d and %d",x,y);
}
