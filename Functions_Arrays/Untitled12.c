#include <stdio.h>
#include <stdlib.h>
void even_odd(int a[], int size);
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
	even_odd(a,size);
	return 0;
}
void even_odd(int a[], int size)
{
	int a1[100], a2[100], i, j=0, k=0;
	for(i=0;i<size;i++)
	{
		if(a[i]%2==0)
		{
			a1[j]=a[i];
			j++;
		}
		else
		{
			a2[k]=a[i];
			k++;
		}
	}
	printf("EVEN ");
	for(i=0;i<j;i++)
	{
		printf("%3d",a1[i]);
	}
	printf("\n");
	printf("ODD ");
	for(i=0;i<k;i++)
	{
		printf("%3d",a2[i]);
	}
}

