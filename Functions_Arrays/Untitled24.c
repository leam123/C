#include <stdio.h>
#include <stdlib.h>
void count(int a[], int size);
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
	count(a,size);	
	return 0;
}
void count(int a[], int size)
{
	int i, ecount=0,ocount=0;
	for(i=0;i<size;i++)
	{
		if(a[i]%2==0)
		{
			ecount++;
		}
		else
		{
			ocount++;
		}
	}
	printf("Even: %d",ecount);
	printf("\n");
	printf("Odd: %d",ocount);
}
