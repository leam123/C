#include <stdio.h>
#include <stdlib.h>
void unique(int a[], int size);
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
	unique(a,size);
	return 0;
}
void unique(int a[],int size)
{
	int i, j, freq[100], count=0;
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i + 1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				freq[j]=0;
			}
		}
		if(freq[i] != 0)
		{
			freq[i]=count;
		}
	}
	
	for(i=0;i<size;i++)
	{
		if(freq[i]==1)
		{
			printf("unique elements: %d\n",a[i]);
		}
	}
}
