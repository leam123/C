#include <stdio.h>
#include <stdlib.h>
void frequency(int a[], int *size);
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
	frequency(a,&size);
	return 0;
}
void frequency(int a[],int *size)
{
	int i, j, count=0, freq[100];
	for(i=0;i<(*size);i++)
	{
		count=1;
		for(j=i + 1; j<(*size); j++)
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
	printf("FREQUENCY\n");
	for(i=0;i<(*size);i++)
	{
		if(freq[i] != 0)
		{
			printf("%d -> %d occurences\n",a[i],freq[i]);
		}
	}
}
