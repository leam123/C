#include <stdio.h>
#include <stdlib.h>
void same(int a1[],int a2[],int size2, int size1);
int main()
{
	int i, a1[100], size1,size2,a2[100];
	printf("Enter size: ");
	scanf("%d",&size1);
	printf("Enter %d elements\n",size1);
	for(i=0;i<size1;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("Enter size: ");
	scanf("%d",&size2);
	printf("Enter %d elements\n",size2);
	for(i=0;i<size2;i++)
	{
		scanf("%d",&a2[i]);
	}
	same(a1,a2,size2,size1);
	return 0;
}
void same(int a1[],int a2[],int size2, int size1)
{
	int i, j;
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			if(a1[i]==a2[j])
			{
				printf("%d ",a1[i]);
			}
		}	
	}
}

