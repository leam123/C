#include <stdio.h>
#include <stdlib.h>
void deleteElement(int a[], int *size);
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
	
	deleteElement(a,&size);
	return 0;
}
void deleteElement(int a[], int *size)
{
	int i, num;
	printf("Enter number to be deleted: ");
	scanf("%d",&num);
	for(i=0; i<(*size); i++)
	{
		if(a[i]==num)
		{
			a[i]= a[i + 1];
		}
	}
	(*size)--;
	
	for(i=0;i<(*size);i++)
	{
		printf("%d ",a[i]);
	}
}
/
