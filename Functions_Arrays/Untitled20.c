#include <stdio.h>
#include <stdlib.h>
void deleteDuplicate(int a[], int size);
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
	deleteDuplicate(a,size);
	return 0;
}
void deleteDuplicate(int a[], int size)
{
	int i, j, k;
	for(i=0;i<size;i++)
	{
		for(j=i + 1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<size;k++)
				{
					a[k]=a[k + 1];
				}
				size--;
				j--;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%3d",a[i]);
	}
}
